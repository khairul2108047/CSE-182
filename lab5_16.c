
#include<stdio.h>
main()
{
    char ch;
    printf("Enter any alphabet:");
    scanf("%c",&ch);
    switch(ch){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("Vowel");
break;
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
printf("Vowel");
break;
default:
printf("Consonent");

}
return 0;

}
