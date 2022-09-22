#include<stdio.h>
int main()
{
    int a[100],r,n,i,j,k=0,c1=0,c,f;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        a[k]=r;
        k++;
        n=n/10;
    }
    for(i=0;i<k;i++)
    {
        c=0;
        for(j=0;j<k;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            c1++;
        }
    }
    if(c1==k)
    printf("Unique Number");
    else
    printf("Not Unique Number");
}