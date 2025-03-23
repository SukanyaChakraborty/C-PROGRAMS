#include <stdio.h>
void swapByValue(int a, int b) 
{
    int c = a;
    a = b;
    b = c;
    printf("After swapByValue: a = %d, b = %d\n", a, b);
}
void swapByReference(int *a, int *b)
 {
    int c = *a;
    *a = *b;
    *b = c;
}
void reverseArray(int arr[], int size) 
{
	int i,j;
    for ( i = 0, j = size - 1; i < j; i++, j--) 
	{
        int c = arr[i];
        arr[i] = arr[j];
        arr[j] = c;
    }
}

int main()
 {
    int size,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++) 
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
    
    int x, y;
    printf("\nEnter two numbers to swap: ");
    scanf("%d %d", &x, &y);
    
    swapByValue(x, y);
    printf("After swapByValue in main: x = %d, y = %d\n", x, y);
    
    swapByReference(&x, &y);
    printf("After swapByReference in main: x = %d, y = %d\n", x, y);
    
    return 0;
}

