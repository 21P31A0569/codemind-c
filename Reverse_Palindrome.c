int pal(int n)
{
    int d,s=0,temp;
    temp=n;
    while(n!=0)
    {
        d=n%10;
        s=s*10+d;
        n=n/10;
    }
    if(s==temp)
    return 1;
    else
    return 0;
}
int rev(int n)
{
    int s=0,d;
    while(n!=0)
    {
        d=n%10;
        s=s*10+d;
        n=n/10;
    }
    return s;
}
#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    x=rev(n);
    n=x+n;
    if(pal(n))
    {
        printf("%d",n);;
    }
    else
    {
        x=rev(n);
        n=n+x;
        if(pal(n))
        {
            printf("%d",n);
        }
        else
        {
            x=rev(n);
            n=n+x;
            printf("%d",n);;
        }
    }
    
}