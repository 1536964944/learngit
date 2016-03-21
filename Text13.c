/*用简单排序来实现数组元素的从小到大的排序*/
#include<stdio.h>
#define N   20
main()
{
     int a[N],n,i,j,t,k;
	 printf("input n:");
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	 for(i=0;i<n;i++)
	 {
	    k=i;
		for(j=i+1;j<n;j++)
		{
		    if(a[k]>a[j])
			{
			    t=k;
				k=j;
				j=t;
			}
		}
		if(k!=i)
		{
		    t=a[i];
			a[i]=a[k];
			a[k]=t;
		}
	 }
	 for(i=0;i<n;i++)
	 printf("%5d",a[i]);
}