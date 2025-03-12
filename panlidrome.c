#include<stdio.h>
void main()
{
    int num=1321, pa=0, a=num;

    while (num>0)
    {
        pa=(pa*10)+(num%10);
        num/=10;
    }
    if(a==pa)
        printf("%d is a palindrome number", pa);
    else
        printf("%d isn't a palindrome number", pa);
}
