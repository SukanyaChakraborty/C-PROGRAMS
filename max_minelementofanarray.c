#include <stdio.h>
void findMinMax(int arr[], int size, int *min, int *max) 
{
    *min = *max = arr[0];
    int i;
    for (i = 1; i < size; i++) 
	{
        if (arr[i] < *min)
		 {
            *min = arr[i];
        }
        if (arr[i] > *max) 
		{
            *max = arr[i];
        }
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
    
    int min, max;
    findMinMax(arr, size, &min, &max);
    
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);
    
    return 0;
}

