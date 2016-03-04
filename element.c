#include<stdio.h>
int main()
{
	int a[10];
	int n,value,index,i;
	printf("enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter value,index");
	scanf("%d%d",&value,&index);

	for(i=n-1;i>=index;i--)
	{
		a[i+1]=a[i];
	}
	a[index]=value;
	printf("\n");
	for(i=0;i<n+1;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
}
