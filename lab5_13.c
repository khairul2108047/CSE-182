#include<stdio.h>
main()
{
    int i, c=0, n;
    int a=0, b=1;
    printf("Enter a number to generate fibonacci series upto nth term \n");
    scanf("%d",&n);
    printf("Fibonacci series up to %d term:\n",n);
    while(c <= n){
        printf("%d\t",c);
        a = b;
        b = c;
        c = a + b;

    }
    return 0;
}
