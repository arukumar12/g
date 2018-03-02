#include <stdio.h>

int main() {
	int n1,n2,res;
	scanf("%d%d",&n1,&n2);
	res=n1*n2;
	if(res%2==0)
	{
	    printf("even");
	}else
	{
	    printf("odd");
	}
	
	return 0;
}
