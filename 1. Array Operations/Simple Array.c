#include <stdio.h>

int main()
{
    int size;  // Declare the size of array
    printf("Enter the size of Array: ");
    scanf("%d", &size);  // Getting the size from user

    int arr[size];  // Declare the array

    printf("Enter the Array elements\n");

    for (int i=0; i<size; i++)   // Getting elements from the user
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<size; i++)   // Printing the array elements
    {
        printf("a[%d] = %d\n", i, arr[i]);
    }
}

/*
Output:

Enter the size of Array: 5
Enter the Array elements
arr[0] = 10
arr[1] = 20
arr[2] = 30
arr[3] = 40
arr[4] = 50
a[0] = 10
a[1] = 20
a[2] = 30
a[3] = 40
a[4] = 50

*/
