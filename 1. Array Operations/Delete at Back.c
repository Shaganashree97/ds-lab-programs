#include <stdio.h>

int main()
{
    int size = 10, i;
    int arr[10] = {10, 20, 30, 40, 50, 60};

    for (i=0; i<size; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("Delete at Back\n");

    for (i = size-1; i >= 0; i--)
    {
        if (arr[i] != 0)
        {
            arr[i] = 0;
            break;
        }
    }
    
    for (i=0; i<size; i++)
    {
        if(arr[i] != 0)
            printf("arr[%d] = %d\n", i, arr[i]);
    }
    
}

/*
Output:

arr[0] = 10
arr[1] = 20
arr[2] = 30
arr[3] = 40
arr[4] = 50
arr[5] = 60
arr[6] = 0
arr[7] = 0
arr[8] = 0
arr[9] = 0
Delete at Back
arr[0] = 10
arr[1] = 20
arr[2] = 30
arr[3] = 40
arr[4] = 50

*/
