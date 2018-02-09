#include <stdio.h>
int main() 
{
    int n,a[10],temp=0,j,i;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
       for(j=i+1;j<n;j++)
       {
           if(a[j]>a[i])
           {
               temp=a[j];
               a[j]=a[i];
               a[i]=temp;
           }
       }
    }
   
     if(n%2==0)
     {
         printf("%d\n",(a[n/2]+a[(n/2)-1])/2);
     }
     else
     {
         printf("%d\n",a[(n-1)/2]);
     }
	return 0;
}
