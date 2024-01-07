#include <stdio.h>

int main()
{
    int size = 10, i;
    int arr[10] = {10, 20, 30, 40, 50, 60};

    for (i=0; i<size; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    printf("Delete at Front\n");

    for (i = 0; i < size; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[i-1] = 0;   // To avoid garbage value in last index we need to assign the index as zero
    
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
Delete at Front
arr[0] = 20
arr[1] = 30
arr[2] = 40
arr[3] = 50
arr[4] = 60

*/
