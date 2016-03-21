#define N    20
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
        int a[N],n,i,j,k,m,t;
		printf("input n:");
		scanf("%d",&n);
		srand((unsigned)time(NULL));
		for(i=0;i<n;i++)
		    a[i]=rand()%1000+1;
        for(i=0;i<n-1;i++)
			for(j=0;j<n-1-i;j++)
			if(a[j]>a[j+1])
			{
			    t=a[j];
				a[j+1]=a[j];
				a[j]=t;
			}
			printf("output a[n]:");
			for(i=0;i<n;i++)
			    printf("%5d",a[i]);
		printf("输入插入数字的个数k:");
		scanf("%d",&k);
		for(j=0;j<k;j++)
		{
		     printf("\n输入插入的数:");
		     scanf("%d",&m);
			 for(i=0;i<n+j;i++)
             if(m<=a[i])
			 {
			     t=a[i];
				 a[i]=m;
				 m=t;
			 }
			 a[i]=m;
		}
		for(i=0;i<n+k;i++)
	      	printf("%5d",a[i]);
		printf("\n");
}