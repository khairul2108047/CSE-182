#include<stdio.h>
main()
{
    int n, rev=0, a, remainder;
    printf("Enter an integer:");
    scanf("%d",&n);
    a = n;
    while(n!=0){
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number = %d\n",rev);
    if(a == rev){
        printf("Palindrome");
    }else{
    printf("Not palindrome");
           }
}
