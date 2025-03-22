#include <stdio.h>
int sum_of_squares(int n)
 {
    int sum = 0,i;
    for (i = 1; i <= n; i++)
	 {
        sum += i * i;
    }
    return sum;
}

int main()
 {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    if (n <= 0) 
	{
        printf("Please enter a positive integer.\n");
        return 1;
    }
    
    printf("Sum of squares of first %d natural numbers is: %d\n", n, sum_of_squares(n));
    
    return 0;
}

