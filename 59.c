#include <stdio.h>
int main() 
{
	int a[10],i,j,max=0;
	for(i=0;i<10;i++)
	{
	    scanf("%d",&a[i]);
	}
	max=a[0];
	for(j=0;j<10;j++)
	{
	    if(a[j]>max)
	  
	       max=a[j];
	}
	    printf("%d",max);
	return 0;
}
