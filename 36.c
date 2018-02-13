#include <stdio.h>
int main(void) 
{
	int c=0,i,b=0;
	char s[100];
	scanf("%s",s);
		if(s[i]>='0'&&s[i]<='9')
			c++;
			printf("%d",c);
		else if(s[i]>='a'&&s[i]<='z')
		{
			b++;
			printf("%d",b);
		}
		printf("%d%d",c+b);
		
	return 0;
}
