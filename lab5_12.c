#include<stdio.h>
main()
{
    int n, l, rem, sum=0, fact, i;
    printf("Enter a number :");
    scanf("%d",&n);
    l = n;
    while(n != 0){
        rem = n % 10;
        fact = 1;
        for(i = 1; i <= rem; i++){
            fact = fact * i;
        }
        sum = sum + fact;
        n = n / 10;
    }
    if(sum == l){
        printf("%d is strong.",l);
    }else{
    printf("%d is not strong.",l);}
    return 0;
}

