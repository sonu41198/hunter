
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
                b[k]=a[i];
                k++;
                f++;
            }
        }
    }
    b[k]='\0';
    for(i=0;i<k;i++)
    {
        for(j=0;j<k;j++)
        {
            if(b[i]<b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d",b[i]);
    }
    if(f==0)
    {
        printf("UNIQUE");
    }
    return 0;
}
