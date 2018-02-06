#include <stdio.h>

int main() {
       int i,a=0;
       char s[100];
       gets(s);
       for(i=0;i!=0;i++)
       {
           if(s[i]==' ')
           a++;
       }
       printf("%d",a+1);
	return 0;
}
