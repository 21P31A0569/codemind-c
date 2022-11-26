#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char str[100];
    scanf("%s",str);
    n=strlen(str);
    if(n==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}
