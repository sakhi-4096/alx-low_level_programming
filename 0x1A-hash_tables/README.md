# C - Hash tables 
Hash map, is a data structure that implements an associative array or dictionary. It is an abstract data type that maps keys to values.
![Internals of a hash table](https://i.imgur.com/bEIWPaQ.png)

## Description
Hash tables, also known as hash maps or dictionaries, are a fundamental data structure in computer science. They provide an efficient way to store and retrieve key-value pairs. Hash tables are implemented using an array (or a similar data structure) and a hash function that maps keys to indices in the array. A hash table uses a hash function to compute an index, also called a hash code, into an array of buckets or slots, from which the desired value can be found. During lookup, the key is hashed and the resulting hash indicates where the corresponding value is stored.

## Features
 * **Fast Lookup:** Hash tables provide constant-time average case lookup, allowing you to quickly retrieve the value associated with a given key.
 * **Key-Value Storage:** Hash tables store data as key-value pairs, allowing you to associate values with unique keys. This makes them useful for tasks like caching, indexing, and data storage.
 * **Flexible Key Types:** Hash tables support a wide range of key types, including integers, strings, tuples, and custom objects, as long as the key is hashable (i.e., its hash value remains constant).
 * **Efficient Insertion and Deletion:** Adding or removing elements from a hash table is typically an efficient operation with an average-case complexity of O(1).
 * **Collision Handling:** Hash functions may map different keys to the same array index, causing collisions. Hash tables employ techniques like chaining (using linked lists) or open addressing (probing) to handle collisions and ensure correct key-value associations.
 * **Dynamic Resizing:** Hash tables can dynamically resize themselves to accommodate a growing number of elements, ensuring efficient space utilization and maintaining a low average load factor.
 * **Iteration Over Key-Value Pairs:** Hash tables often provide methods to iterate over the key-value pairs, allowing you to process all the elements stored in the table.

## Usage
```c
#define TABLE_SIZE 10

typedef struct Node {
    char* key;
    int value;
    struct Node* next;
} Node;

typedef struct {
    Node* table[TABLE_SIZE];
} HashTable;

unsigned int hash(const char* key) {
    unsigned int hash_value = 0;
    int len = strlen(key);
    for (int i = 0; i < len; i++) {
        hash_value = hash_value * 31 + key[i];
    }

    return hash_value % TABLE_SIZE;
}
```

## Examples
```c
int get(HashTable* ht, const char* key) {
    unsigned int index = hash(key);
    Node* curr = ht->table[index];

    while (curr != NULL) {
        if (strcmp(curr->key, key) == 0) {
            return curr->value;
        }
        curr = curr->next;
    }

    return -1; /* Key not found */
}
```

## Credits
 * [Introduction to Hash Tables](https://www.youtube.com/watch?v=MfhjkfocRR0)
 * [Hash function](https://en.wikipedia.org/wiki/Hash_function)
 * [Hash table](https://en.wikipedia.org/wiki/Hash_table)
 * [How To Implement a Sample Hash Table in C/C++](https://www.digitalocean.com/community/tutorials/hash-table-in-c-plus-plus)
 * [What is a hash table and how do you make it in C?](https://stackoverflow.com/questions/31930046/what-is-a-hash-table-and-how-do-you-make-it-in-c)
 * [Understanding and implementing a Hash Table (in C)](https://www.youtube.com/watch?v=2Ti5yvumFTU)
 * [Hash Tables and Hash Functions](https://www.youtube.com/watch?v=KyUTuwz_b7Q)
 * [Hash Tables](https://guides.codepath.com/compsci/Hash-Tables)
 * [Data Structures: Hash Tables](https://www.youtube.com/watch?v=shs0KM3wKv8)
 * [Hashing Out Hash Functions](https://medium.com/basecs/hashing-out-hash-functions-ea5dd8beb4dd)
 * [Hash Tables Algorithms, Part I](https://www.coursera.org/lecture/algorithms-part1/hash-tables-CMLqa)

## Contact
 * [Sakhile Ndlazi](https://www.twitter.com/sakhilelindah)
