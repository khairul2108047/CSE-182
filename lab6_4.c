#include <stdio.h>

int main(){
    int arr[100], i, j;

    printf("Enter Number of Elements in Array\n");
    scanf("%d", &i);
    printf("Enter %d numbers:\n", i);

    for(j = 0; j < i; j++){
        scanf("%d", &arr[j]);
    }

    printf("Negative Elements in Array\n");
    for(j = 0; j < i; j++){
        if(arr[j] < 0) {
            printf("%d ", arr[j]);
        }
    }

    return 0;
}

