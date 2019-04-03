
#include <stdio.h>

int main()
{
    int k,a[50],n,c=0,m,i,j,b[50],c1=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }  
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
        c++;
    }
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       {
           if(b[i]==a[j])
           {
               c1++;
           }
       }
   }

if(c1==c)
{
    printf("YES");
}
else
{
    printf("NO");
}
    return 0;
}
