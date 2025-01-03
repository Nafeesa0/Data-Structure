#include<stdio.h>

int main()
{
    int n, sum = 0, i, array[100];

    printf("Enter the limit: ");
    scanf("%d", &n);

    printf("\nEnter %d integers \n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[c]);
        sum += array[i];    // same as sum = sum + array[i]
    }

    printf("\nSum = %d\n", sum);
    return 0;
}