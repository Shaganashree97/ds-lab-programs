#include <stdio.h>

int main()
{
    int size = 10;
    int arr[10] = {10, 20, 30, 40};

    printf("Enter element to insert at back: ");
    int element;
    scanf("%d", &element);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
           arr[i] = element;  // Storing in the next position
           break;   // Break after storing 1 element
        }
    }
    
    for (int i=0; i<size; i++)
    {
        printf("a[%d] = %d\n", i, arr[i]);
    }
    
}

/*
Output:

Enter element to insert at back: 90
a[0] = 10
a[1] = 20
a[2] = 30
a[3] = 40
a[4] = 90
a[5] = 0
a[6] = 0
a[7] = 0
a[8] = 0
a[9] = 0

*/
