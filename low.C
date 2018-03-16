#include<stdio.h>
int main()
{
	int val[5],h,l,i;
	for(i=0;i<5;i++)
        {
		printf("\nENTER VALUE-%d: ",i+1);
		scanf("%d",&val[i]);
	}
	l=val[0];
	h=val[0];
	for(i=0;i<5;i++)
        {
		if(val[i]>h)
			h=val[i];
      }
	printf("\nHIGHEST VALUE IS %d",h);
	printf("\nLOWEST VALUE IS %d",l);
	return 0;
}
