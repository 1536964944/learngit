#include<stdio.h>
main()
{
    int *p,*q,*r,*t;
	p=(int *)malloc(sizeof(int));
	q=(int *)malloc(sizeof(int));
	r=(int *)malloc(sizeof(int));
	scanf("%d,%d,%d",p,q,r);
	if(*p<*q)
	{
	   t=p;
	   p=q;
	   q=t;
	}
	if(*p<*r)
	{
	   t=p;
	   p=r;
	   r=t;
	}
	if(*q<*r)
	{
	   t=q;
	   q=r;
	   r=t;
	}
	printf("%d,%d,%d",*p,*q,*r);
	free(p);
	free(q);
	free(r);
}