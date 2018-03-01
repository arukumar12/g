#include <stdio.h>

void main() {
          int n,a,b=0;
          scanf("%d",&n);
          while(n>0)
          {
              a=n%10;
              b++;
              n=n/10;
          }printf("%d",b);
	return 0;
}
