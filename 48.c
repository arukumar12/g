#include <stdio.h>

void main() {
	int a[10],n,sum=0,res,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    sum=sum+a[i];
	}res=sum/n;
	printf("%d",res);

}
