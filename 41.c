#include <stdio.h>

int main() {
	char f[10];
	int n,i;
	scanf("%s",&f);
	printf("enter number of times to show");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	    printf("%s\n",f);
	}
	
	return 0;
}
