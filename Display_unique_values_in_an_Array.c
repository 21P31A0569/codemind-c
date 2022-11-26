#include<stdio.h>
int main()
{
    int arr[50],i,j,n,count=0,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(arr[j]==arr[i] && j!=i)
            {
                count=1;
                break;
            }
        }
        if(count==0)
        {
            printf("%d ",arr[i]);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
    return 0;
}