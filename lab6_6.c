#include<stdio.h>
int main()
{
    int arr1[100], arr2[100],i,n;

    printf("Enter the number of elements of the array : ");
    scanf("%d",&n);
    printf("Enter the elements of arr1 :");
    for (i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Elements of arr1 :");
    for (i = 0; i < n; i++){
        printf("%d\t", arr1[i]);
    }
    for(i = 0; i < n; i++){
        arr2[i] = arr1[i];
    }
    printf("\nElements of arr2 = ");
    for(i = 0; i < n; i++){
        printf("%d\t",arr2[i]);
    }

    return 0;
}
