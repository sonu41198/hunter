
#include <stdio.h>

int main()
{
    int a[50],n,i,j,b[50],k=0,temp,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }  
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
               printf("%d",a[i]);
               i=n;
               f++;
            }
        }
    }
    if (f==0)
    {
        printf("UNIQUE");
    }
    return 0;
}
