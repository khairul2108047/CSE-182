#include <stdio.h>

int main(){
    int arr[100], i, j, e = 0, o = 0;

    printf("Enter Number of Elements in Array\n");
    scanf("%d", &i);
    printf("Enter %d numbers: \n", i);

    for(j = 0; j < i; j++){
        scanf("%d", &arr[j]);
    }
    for(j = 0; j < i; j++){
        if(arr[j] % 2 == 0) {
          e++;
        }
        else{
            o++;
        }
    }
        printf("\nTotal even numbers = %d",e);
        printf("\nTotal odd numbers = %d",o);


    return 0;
}
