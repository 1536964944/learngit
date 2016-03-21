/*输入若干个同学的名字，将名字按从小到大的顺序输出*/
#include<stdio.h>
#include<string.h>
#define N  50
main()
{
     char name[N][35],k[35];
	 int n,i,j;
	 printf("input n:");
	 scanf("%d",&n);
	 for(i=0;i<n+1;i++)
	     gets(name[i]);
	 for(i=0;i<n+1;i++)
	      for(j=0;j<n;j++)
		      if(strcmp(name[j],name[j+1])>0)
			  {
			      strcpy(k,name[j]);
				  strcpy(name[j],name[j+1]);
				  strcpy(name[j+1],k);
			  }
	   for(i=0;i<n+1;i++)
	       puts(name[i]);
}