#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
int hashTable[SIZE];
// Initialize hash table
void initialize()
{
    int i;
    for(i = 0; i < SIZE; i++)
        hashTable[i] = -1;
}
int hashFunction1(int key){
	return key%SIZE;
}
int hashFunction2(int key){
	return(7-7%SIZE);
}



// Insert a key
void insert()
{
    int key, index, start,i=1;
    printf("Enter key to insert: ");
    scanf("%d", &key);
    index = hashFunction1(key);
    int step =hashFunction2(key);
    
    start = index;
    while(hashTable[index] != -1)
    {
        index =(index +step)%SIZE;
        if(index == start)
        {
            printf("Hash Table is Full!\n");
            return;
        }
        step++;
    }

    hashTable[index] = key;
    printf("%d inserted at index %d\n", key, index);
}

// Search a key
void search()
{
    int key, index, start;

    printf("Enter key to search: ");
    scanf("%d", &key);
    index = hashFunction1(key);
    start = index;
    while(hashTable[index] != -1)
    {
        if(hashTable[index] == key)
        {
            printf("%d found at index %d\n", key, index);
            return;
        }

        index = (index + 1) % SIZE;
        if(index == start)
            break;
    }

    printf("%d not found in the hash table.\n", key);
}

// Display hash table
void display()
{
    int i;

    printf("\n----- HASH TABLE -----\n");

    for(i = 0; i < SIZE; i++)
    {
        if(hashTable[i] == -1)
            printf("Index %d : Empty\n", i);
        else
            printf("Index %d : %d\n", i, hashTable[i]);
    }
}

int main()
{
    int choice;
    initialize();

    while(1)
    {
        printf("\n===== HASH TABLE MENU =====\n");
        printf("1. Insert\n");
        printf("2. Search\n");
        printf("3. Display\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                insert();
                break;

            case 2:
                search();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program...\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
