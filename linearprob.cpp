#include <stdio.h>

#define SIZE 10

int hash[SIZE];

// Initialize hash table
void initialize() {
    int i;
    for(i = 0; i < SIZE; i++)
        hash[i] = -1;
}

// Insert using Linear Probing
void insert(int key) {
    int index, start;

    index = key % SIZE;
    start = index;

    while(hash[index] != -1) {
        index = (index + 1) % SIZE;

        if(index == start) {
            printf("Hash Table is Full\n");
            return;
        }
    }

    hash[index] = key;
}

// Display hash table
void display() {
    int i;

    printf("\nHash Table:\n");
    for(i = 0; i < SIZE; i++) {
        if(hash[i] == -1)
            printf("%d --> Empty\n", i);
        else
            printf("%d --> %d\n", i, hash[i]);
    }
}

int main() {
    int n, key, i;

    initialize();

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &key);
        insert(key);
    }

    display();

    return 0;
}
