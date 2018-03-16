#include <stdio.h>
#include<string.h>

int main(void) {
	char a[100],b[100];
	scanf("%c",a);
	b=strrev(a);
	if(b==a)
	{
		printf("poly");
	}
	else
	{
		printf("not poly");
	}
	return 0;
}
