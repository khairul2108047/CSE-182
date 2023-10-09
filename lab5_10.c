#include<stdio.h>
main()
{
    int c, n, i, p, s=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(c = 2; c <= n; c++){
        p = 1;
        for(i = 2; i <=(c/2); ++i){
            if(c % i == 0){
                p = 0;
                break;
            }
        }
        if(p == 1)
            s += c;
    }
    printf("Sum of prime numbers : %d",s);
    return 0;
}
