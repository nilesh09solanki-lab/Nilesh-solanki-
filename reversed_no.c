#include<stdio.h>
int main()
{
    int num,digit;
    printf("Ënter a no:");
    scanf("%d",&num);
    printf("reversed digits:");
    while(num>0)
    {

        digit=num%10;
        printf("%d",digit);
        num=num/10;

    }
    return 0;
}
