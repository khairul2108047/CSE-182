#include<stdio.h>
main()
{
    int n, i, p, counter;
    printf("Enter a number :\n");
    scanf("%d",&n);
    printf("List of prime factors of %d \n",n);
    for(counter = 2; counter <= n; counter++){
        if(n % counter == 0){
            p = 1;
            for(i = 2; i <=(counter/2); i++){
                if(counter % i == 0){
                    p = 0;
                    break;
                }
            }
            if(p == 1)
                printf("%d",counter);
        }
    }
    return 0;
}
