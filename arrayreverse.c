#include <stdio.h>
void reverseArray(int arr[], int size)
 {
    printf("Array in reverse order: ");
    int i;
    for (i = size - 1; i >= 0; i--) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
 {
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    int arr[size],i;
    printf("Enter %d elements: ", size);
    for ( i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }
    
    reverseArray(arr, size);
    
    return 0;
}

