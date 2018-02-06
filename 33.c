#include <stdio.h>

int main() {
       int i,a=0;
       char s[100];
       gets(s);
       for(i=0;s[i]!=0;i++)
       {
           if(s[i]==' ')
           a++;
       }
       printf("%d",a);
	return 0;
}
