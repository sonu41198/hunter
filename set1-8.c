
#include <stdio.h>

int main()
{
    int k,a[50],n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }  
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           for(k=j+1;k<n;k++)
           {
               if(a[i]+a[j]==a[k])
               {
                   if(a[i]<a[j]<a[k])
                   {
                       printf("%d %d %d",a[i],a[j],a[k]);
                       printf("\n");
                   }
               }
           }
       }
   }
  
    return 0;
}
