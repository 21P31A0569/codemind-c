#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,i,c=0,j,d=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        c=0;
        if(i==1)
        {
            continue;
        }
        for(j=2;j<int(sqrt(i)+1);j++)
        {
            if(i%j==0)
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            d++;
        }
    }
    printf("%d",d);
}