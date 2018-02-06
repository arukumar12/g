#include <stdio.h>

int main(void) {
         int i,c=0;
         char a[50];
         gets(a);
         for(i=0;a[i]!=0;i++)
         {
         	if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='z'))
         	c++;
         
         	
         }
         printf("%d",c);
       
	return 0;
}
