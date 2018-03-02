#include <stdio.h>

int main() {
	char a[100],b=0,c=0,i;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
	    if(a[i]>='a'||(a[i]<='z')&&(a[i]>'A'||a[i]<'Z'))
	    b++;
	    else
	    c++;
	}
	    if(b>0&&c>0)
	    {
	        printf("yes");
	    }
	    else
	    {
	        printf("no");
	    }
	return 0;
}
