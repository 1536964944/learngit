/*冒泡排序的应用    从小到大排列*/
#include<stdio.h>
main()
{
	int  a[5],i,t,j;
	printf("input a[5]:");
	for(i=0;i<5;i++)
	   scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	for(j=0;j<5-i;j++)
	   if(a[j]>a[j+1])
	   {
	       t=a[j];
	   a[j]=a[j+1];
		   a[j+1]=t;
	   }
	printf("输出排列好的数:");
	for(i=0;i<5;i++)
	   printf("%5d",a[i]);
}