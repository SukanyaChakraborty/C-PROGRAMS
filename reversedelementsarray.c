#include <stdio.h>
void reverseArray(int arr[], int size) 
{
	int i,j;
    for (i = 0, j = size - 1; i < j; i++, j--)
	 {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
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
    
    printf("Reversed array: ");
    for (i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
