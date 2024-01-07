#include <stdio.h>
#include <stdlib.h>

int size = 5, count = 0, element;  // size - array size, count - to track the no of elements in array, element - to get element from the user
int arr[5];   // Declare array

void insertAtFront()   // Insert at Front
{
    if (count == size)
    {
        printf("Array is Full\n");
    }
    else
    {
        printf("Enter element to Insert: ");
        scanf("%d", &element);

        for (int i = size - 1; i >= 0; i--)
        {
            if (arr[i] != 0)
            {
                arr[i + 1] = arr[i];   // Moves elements 1 position ahead from its index
            }
        }
        arr[0] = element;   // Insert at 1st position
    count++;   // count increments after insert
    }
}   // End of Insert at Front

void insertAtBack()   // Insert at Back
{
    if (count == size)
    {
        printf("Array is Full\n");
    }
    else
    {
        printf("Enter element to Insert: ");
        scanf("%d", &element);
        arr[count] = element;   // Insert at last position
    count++;   // count increments after insert
    }
}   // End of Insert at Back

void deleteAtFront()   // Delete at Front
{
    if (count == 0)
    {
        printf("Array is Empty\n");
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] != 0)
            {
                arr[i] = arr[i + 1];   // Moves 1 position before to its index
            }
        }
        count--;   // count decrements after delete
    }
}   // End of Delete at Front

void deleteAtBack()   // Delete at Back
{
    if (count == 0)
    {
        printf("Array is Empty\n");
    }
    else
    {
        arr[count - 1] = 0;
        count--;   // count decrements after delete
    }
}   // End of Delete at Back

void display()   // Display elements in array
{
    if(count == 0)
    {
        printf("No elements to Display\n");
    }
    else
    {
        for(int i=0; i<size; i++)
        {
            if (arr[i] != 0)
                printf("arr[%d] = %d\n", i, arr[i]);   // Display all the elements
        }
    }
}   // End of display

int main()
{
    int choice;   // Declare the choice to perform the operation
    printf("Array Operations\n");
    while(1)
    {
        printf("\n1. Insert at Front\n");   // Menu list for operation
        printf("2. Insert at Back\n");
        printf("3. Delete at Front\n");
        printf("4. Delete at Back\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter the Choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                insertAtFront();
                break;
            case 2:
                insertAtBack();
                break;
            case 3:
                deleteAtFront();
                break;
            case 4:
                deleteAtBack();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);   // To exit
            default:
                printf("Invalid Choice");
        }   // End of Switch
    }   // End of while
}   // End of main

/*
Output:

Array Operations

1. Insert at Front
2. Insert at Back
3. Delete at Front
4. Delete at Back
5. Display
6. Exit
Enter the Choice: 5
No elements to Display

1. Insert at Front
2. Insert at Back
3. Delete at Front
4. Delete at Back
5. Display
6. Exit
Enter the Choice: 3
Array is Empty

1. Insert at Front
2. Insert at Back
3. Delete at Front
4. Delete at Back
5. Display
6. Exit
Enter the Choice: 1
Enter element to Insert: 20

1. Insert at Front
2. Insert at Back
3. Delete at Front
4. Delete at Back
5. Display
6. Exit
Enter the Choice: 2
Enter element to Insert: 30

1. Insert at Front
2. Insert at Back
3. Delete at Front
4. Delete at Back
5. Display
6. Exit
Enter the Choice: 1
Enter element to Insert: 50

1. Insert at Front
2. Insert at Back
3. Delete at Front
4. Delete at Back
5. Display
6. Exit
Enter the Choice: 2 
Enter element to Insert: 60

1. Insert at Front
2. Insert at Back
3. Delete at Front
4. Delete at Back
5. Display
6. Exit
Enter the Choice: 1
Enter element to Insert: 40

1. Insert at Front
2. Insert at Back
3. Delete at Front
4. Delete at Back
5. Display
6. Exit
Enter the Choice: 2
Array is Full

1. Insert at Front
2. Insert at Back
3. Delete at Front
4. Delete at Back
5. Display
6. Exit
Enter the Choice: 5
arr[0] = 40
arr[1] = 50
arr[2] = 20
arr[3] = 30
arr[4] = 60

1. Insert at Front
2. Insert at Back
3. Delete at Front
4. Delete at Back
5. Display
6. Exit
Enter the Choice: 3

1. Insert at Front
2. Insert at Back
3. Delete at Front
4. Delete at Back
5. Display
6. Exit
Enter the Choice: 4

1. Insert at Front
2. Insert at Back
3. Delete at Front
4. Delete at Back
5. Display
6. Exit
Enter the Choice: 5
arr[0] = 50
arr[1] = 20
arr[2] = 30

1. Insert at Front
2. Insert at Back
3. Delete at Front
4. Delete at Back
5. Display
6. Exit
Enter the Choice: 6

*/
