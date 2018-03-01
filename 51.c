#include <stdio.h>

void main() {
	int n,a,b,c,d;
	scanf("%d",&n);
	if(n!=0)
	{
	   a=n/100;
	    b=n%100;
	    c=b/10;
	    d=b%10;
	}printf(" %d %d %d",a,c,d);

}
