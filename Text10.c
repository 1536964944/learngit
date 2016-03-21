#define N 20
#define M  20
#include<stdio.h>
main()
{
   int a[N],b[M],m,n,i,j,t;
   printf("input m,n:");
   scanf("%d,%d",&m,&n);
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   for(j=0;j<m;j++)
      scanf("%d",&b[j]);
   for(j=0;j<m;j++)
   {
      for(i=0;i<n+j;i++)
      if(b[j]<=a[i])
	  {
	      t=a[i];
		  a[i]=b[j];
		  b[j]=t; 
	  }
        a[i]=b[j];
   }
   for(i=0;i<n+m;i++)
       printf("%5d",a[i]);
   printf("\n");
}