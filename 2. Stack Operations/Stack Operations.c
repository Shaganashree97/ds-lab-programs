#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10   // defining the stack's size

int stack[MAX_SIZE];   // creating stack using array
int top = -1;    // 'top' to keep track of array index

// int top = 0;

/*
int isFull()
{
    if (top == MAX_SIZE - 1)
       return 1;
    else
       return 0;
}

int isEmpty()
{
    if (top == -1)
       return 1;
    else
       return 0;
}
*/

void push()
{
    if (top == MAX_SIZE - 1)  // (isFull())
       printf("Stack is Full");
    else
    {
        printf("\nEnter value: ");
        scanf("%d", &stack[++top]);
    }
}

void pop()
{
    if (top == -1)   // (isEmpty())
       printf("Stack is Empty");
    else
    {
        stack[top] = 0;
        top--;
    }
}

void peek()
{
    printf("\nPeek ELement: %d", stack[top]);
}

void display()
{
    if (top == -1)   // (isEmpty())
        printf("No elements to display");
    else
    {
        for (int i=top; i>=0; i--)
           printf("%d\n", stack[i]);
    }
}

int main()
{
    int opt;
    while(1)
    {
        printf("\n\nStack Operation:\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\nEnter the Option: ");
        scanf("%d", &opt);

        switch(opt)
        {
            case 1:
              push(); break;
            case 2:
              pop(); break;
            case 3:
              peek(); break;
            case 4:
              display(); break;
            case 5:
              return 0;
        }
//    return 0;
    }
}


/*
Output:

Stack Operation:
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter the Option: 2
Stack is Empty

Stack Operation:
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter the Option: 4
No elements to display

Stack Operation:
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter the Option: 1

Enter value: 10


Stack Operation:
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter the Option: 1

Enter value: 20


Stack Operation:
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter the Option: 3

Peek ELement: 20

Stack Operation:
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter the Option: 1

Enter value: 60


Stack Operation:
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter the Option: 4
60
20
10


Stack Operation:
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter the Option: 2


Stack Operation:
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter the Option: 4
20
10


Stack Operation:
1. Push
2. Pop
3. Peek
4. Display
5. Exit
Enter the Option: 5

*/