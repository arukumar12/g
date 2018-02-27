#include <stdio.h>
int main()
{
    int max=0,min=0,n,i;
    int a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   
max=0;
min=0;
for(i=0;i<n;i++)
{
    if(a[i]>max)
    {
        max=a[i];
    }
}
rintf("%d\t",max);
for(i=0;i<n;i++)
{
    if(a[i]<min)
    {
      min=a[i];
    }
}printf("%d",min);
return 0;
}

        
