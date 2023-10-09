#include<stdio.h>
int main()
{
    int arr[100], n, i;
    printf("Enter the size of array = ");
    scanf("%d",&n);
    printf("Enter the elements of the array = ");
    for (i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Elements of the array = ");
    for (i = 0; i < n; i++){
        printf("%d\t",arr[i]);
    }
    printf("\nArray in reverse order :");
    for(i = n - 1 ; i >= 0; i--){
        printf("%d\t", arr[i]);
    }

    return 0;
}
