#include <stdio.h>

int main() {
    int i;
	char a[10];
	char b[10];
	scanf("%s%s",&a,&b);
	if(a[i]!=b[i])
	{
	    printf("%s",a);
	    printf("%s",b);
	}
	else if(a[i]==b[i])
	{
		printf("%s",a);
		printf("%s",b);
	}
	else
	{
		printf("nothing");
	}
	return 0;
}
