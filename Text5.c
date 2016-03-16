/*把每一行列的最大元素放在对角线的位置*/
#define N 20  
#include<stdio.h>
main()
{
      int a[N][N],n,i,j,t;
	  printf("input n:");
	  scanf("%d",&n);
	  printf("input a[n][n]:");
	  for(i=0;i<n;i++)
	  for(j=0;j<n;j++)
	     scanf("%d",&a[i][j]);
	  for(j=0;j<n;j++)
	 {
      for(i=0;i<n;i++)
	     if(a[j][j]<a[i][j])
	   {
	         t=a[j][j];
			 a[j][j]=a[i][j];
			 a[i][j]=t;
	   }
	 }
	 for(i=0;i<n;i++)
	 {
	      for(j=0;j<n;j++)
		      printf("%5d",a[i][j]);
	   printf("\n");
	 }
}