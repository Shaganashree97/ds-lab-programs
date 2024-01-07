#include <stdio.h>

int main()
{
    int size = 10;
    int arr[10] = {10, 20, 30, 40};

    printf("Enter element to insert at front: ");
    int element;
    scanf("%d", &element);
  
    for (int i = size - 1; i > 0; i--)    // Shifting elements one position ahead starting from index 1
    {
        arr[i] = arr[i - 1];
    }
 
    arr[0] = element;   // Storing the new element in first position

    for (int i=0; i<size; i++)
    {
        printf("a[%d] = %d\n", i, arr[i]);
    }
    
}

/*
Output:

Enter element to insert at front: 50
a[0] = 50
a[1] = 10
a[2] = 20
a[3] = 30
a[4] = 40
a[5] = 0
a[6] = 0
a[7] = 0
a[8] = 0
a[9] = 0

*/
