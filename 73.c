#include <stdio.h>

void main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a<c)
	{
	    printf("yes");
	}
	else if(a<b&&a>c)
	{
	    printf("yes");
	}
	else
	{
	    printf("no");
	}
	
}
