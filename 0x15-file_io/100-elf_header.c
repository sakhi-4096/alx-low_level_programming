#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define EI_NIDENT 16
#define EI_CLASS 4
#define EI_DATA 5
#define EI_VERSION 6
#define EI_OSABI 7
#define EI_ABIVERSION 8
#define ET_NONE 0
#define ET_REL 1
#define ET_EXEC 2
#define ET_DYN 3
#define ET_CORE 4
#define ELFCLASSNONE 0
#define ELFCLASS32 1
#define ELFCLASS64 2
#define ELFDATANONE 0
#define ELFDATA2LSB 1
#define ELFDATA2MSB 2
#define EV_CURRENT 1
#define ELFOSABI_NONE 0
#define ELFOSABI_HPUX 1
#define ELFOSABI_NETBSD 2
#define ELFOSABI_LINUX 3
#define ELFOSABI_SOLARIS 6
#define ELFOSABI_IRIX 8
#define ELFOSABI_FREEBSD 9
#define ELFOSABI_TRU64 10
#define ELFOSABI_ARM 97
#define ELFOSABI_STANDALONE 255

typedef struct
{
	unsigned char e_ident[EI_NIDENT];
	unsigned short e_type;
	unsigned short e_machine;
	unsigned int e_version;
	unsigned long int e_entry;
	unsigned long int e_phoff;
	unsigned long int e_shoff;
	unsigned int e_flags;
	unsigned short e_ehsize;
	unsigned short e_phentsize;
	unsigned short e_phnum;
	unsigned short e_shentsize;
	unsigned short e_shnum;
	unsigned short e_shstrndx;
} Elf64_Ehdr;

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - Checks if the file is a valid ELF file.
 * Exits with an error if it is not.
 *
 * @e_ident: The ELF identification bytes.
 */
void check_elf(unsigned char *e_ident)
{
	int index;
	unsigned char elf_magic[] = {0x7f, 'E', 'L', 'F'};

	for (index = 0; index < 4; index++)
	{
		if (e_ident[index] != elf_magic[index])
		{
			fprintf(stderr, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - Prints the ELF magic number.
 *
 * @e_ident: The ELF identification bytes.
 */
void print_magic(unsigned char *e_ident)
{
	int index;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);
		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - Prints the ELF class.
 *
 * @e_ident: The ELF identification bytes.
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - Prints the data encoding.
 *
 * @e_ident: The ELF identification bytes.
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_version - Prints the ELF version.
 *
 * @e_ident: The ELF identification bytes.
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d", e_ident[EI_VERSION]);
	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * print_osabi - Prints the operating system and ABI.
 *
 * @e_ident: The ELF identification bytes.
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abi - Prints the ABI version.
 *
 * @e_ident: The ELF identification bytes.
 */
void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of ELF file.
 *
 * @e_type:   The ELF type.
 * @e_ident:  The ELF identification bytes.
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry - Prints the entry point address.
 *
 * @e_entry:  The entry point address.
 * @e_ident:  The ELF identification bytes.
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - Closes the file descriptor for the ELF file.
 *
 * @elf: The file descriptor for the ELF file.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		fprintf(stderr, "Error: Unable to close file descriptor\n");
		exit(99);
	}
}

/**
 * main - entry point of program
 *
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int elf;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_file\n", argv[0]);
		exit(97);
	}

	elf = open(argv[1], O_RDONLY);
	if (elf == -1)
	{
		fprintf(stderr, "Error: Unable to open file '%s'\n", argv[1]);
		exit(96);
	}

	if (read(elf, &elf_header, sizeof(Elf64_Ehdr)) == -1)
	{
		fprintf(stderr, "Error: Unable to read ELF header\n");
		close_elf(elf);
		exit(95);
	}

	check_elf(elf_header.e_ident);
	print_magic(elf_header.e_ident);
	print_class(elf_header.e_ident);
	print_data(elf_header.e_ident);
	print_version(elf_header.e_ident);
	print_osabi(elf_header.e_ident);
	print_abi(elf_header.e_ident);
	print_type(elf_header.e_type, elf_header.e_ident);
	print_entry(elf_header.e_entry, elf_header.e_ident);

	close_elf(elf);
	return (0);
}
