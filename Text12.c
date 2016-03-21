/*将原始最大的数组元素下标和最小的数组元素下标输出*/
#include<stdio.h>
#define N   20
main()
{
    int a[N],n,i,j,t1,t2,mini,maxi;
	printf("input n:");
	scanf("%d",&n);
	printf("please input a[n]:");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
		maxi=0;
		mini=0;
	for(i=1;i<n;i++)
	{
	     if(a[maxi]<a[i])
		  {
		      t1=maxi;
			  maxi=i;
			  i=t1;
		  }
		  if(a[mini]>a[i])
		  {
		      t2=mini;
			  mini=i;
			  i=t2;
		  }
	}
	printf("%d,%d",maxi,mini);
}
