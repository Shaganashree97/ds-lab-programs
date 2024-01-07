#include <stdio.h>

int main()
{
    int size;  // Declare the size
    printf("Enter the size of Array: ");
    scanf("%d", &size);   // Getting size from user

    int arr[size];

    printf("Enter the Array elements\n");

    for (int i=0; i<size; i++)  // Getting array elements from user
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Array elements in Reverse order: [ ");

    for (int i=size-1; i>=0; i--)  // Displaying in Reverse order
    {
        printf("%d ", arr[i]);
    }
    printf("]");
}

/*
Output:

Enter the size of Array: 5
Enter the Array elements
arr[0] = 11
arr[1] = 22
arr[2] = 33
arr[3] = 44
arr[4] = 55
Array elements in Reverse order: [ 55 44 33 22 11 ]

*/
