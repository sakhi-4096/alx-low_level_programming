#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

#define EI_NIDENT 16

/**
 * struct Elf32_header - ELF header for 32-bit ELF files
 * @e_ident[EI_NIDENT]: ELF identification bytes
 * @e_type: object file type
 * @e_machine: architecture
 * @e_version: object file version
 * @e_entry: entry point virtual address
 * @e_phoff: program header table file offset
 * @e_shoff: section header table file offset
 * @e_flags: processor-specific flags
 * @e_ehsize: ELF header size in bytes
 * @e_phentsize: program header table entry size
 * @e_phnum: program header table entry count
 * @e_shentsize: section header table entry size
 * @e_shnum: section header table entry count
 * @e_shstrndx: section header string table index
 */
typedef struct {
	unsigned char e_ident[EI_NIDENT];
	unsigned short e_type;
	unsigned short e_machine;
	unsigned int e_version;
	unsigned int e_entry;
	unsigned int e_phoff;
	unsigned int e_shoff;
	unsigned int e_flags;
	unsigned short e_ehsize;
	unsigned short e_phentsize;
	unsigned short e_phnum;
	unsigned short e_shentsize;
	unsigned short e_shnum;
	unsigned short e_shstrndx;
} Elf32_Ehdr;

/**
 * read_elf_header - read the ELF header from specified file descriptor
 * @fd: file descriptor to be checked
 * @header: header of file descriptor
 * Return: 0 on success, -1 on error
 */
int read_elf_header(int fd, Elf32_Ehdr *header)
{
	if (lseek(fd, 0, SEEK_SET) == -1)
	{
		perror("lseek");
		return (-1);
	}

	if (read(fd, header, sizeof(Elf32_Ehdr)) != sizeof(Elf32_Ehdr))
	{
		perror("read");
		return (-1);
	}

	return (0);
}

/**
 * print_elf_header - display the information inthe specified ELF header
 * @header: header to be dsiplayed
 * Return: void
 */
void print_elf_header(const Elf32_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");

	printf("  Class:                              %s\n", header->e_ident[4] == 1 ? "ELF32" : "ELF64");
	printf("  Data:                               %s\n", header->e_ident[5] == 1 ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                            %d (current)\n", header->e_ident[6]);

	printf("  OS/ABI:                             ");
	switch (header->e_ident[7])
	{
		case 0:
			printf("UNIX System V ABI\n");
			break;
		case 3:
			printf("Linux ABI\n");
			break;
		default:
			printf("<unknow>");
			break;
	}

	printf("  ABI Version:                       %d\n", header->e_ident[8]);
	printf("  Type:                              ");
	switch (header->e_type)
	{
		case 0:
			printf("NONE (No file type)\n");
			break;
		case 1:
			printf("REL (Relocatable file)\n");
			break;
		case 2:
			printf("EXEC (Executable file)\n");
			break;
		case 3:
			printf("DYN (Shared object file)\n");
			break;
		case 4:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}

	printf("  Entry point address:                %08x\n", header->e_entry);
}

/**
 * main - entry point for program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf32_Ehdr header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: %s\n", strerror(errno));
		return (98);
	}

	if (read_elf_header(fd, &header) == -1)
		return (98);

	print_elf_header(&header);

	close(fd);

	return (0);
}
