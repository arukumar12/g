#include<stdio.h>
int main()
{
int a[10],i,max,j,v;
scanf("%d",&v);
printf("\n Enter array");
for(i=0;i<v;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(j=1;j<v;j++)
{
if(a[j]>max)
 max=a[j];
}
printf("Maximum is:%d",max);
return 0;
}
