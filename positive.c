#include<stdio.h>
int main()
{
    int num;
    printf("enter any num");
    scanf("%d",&num);
    if(num>0)
    {
        printf("num is positive");
    }
    else if(num<0)
    {
        printf("num is negative");
    }
else
    {
    printf("num is zero");
    }
}    