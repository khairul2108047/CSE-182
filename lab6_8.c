#include<stdio.h>
int main()
{
    int arr[100], n, i, sum = 0;
    printf("Enter size of the array = ");
    scanf("%d", &n);

    printf("Enter the elements in array = ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The elements of the array are : ");
        for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
        for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("\nThe sum of the array is = %d", sum);


   return 0;
}
