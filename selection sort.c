#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,min,a[100],temp,n;
	printf("Enter the no of elements :");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
	 min=i;
	 for(j=i+1;j<n;j++)
	 {
	 	if(a[j]<a[min])
	 	min=j;
	 }
	if(min!=i)
	{
	    temp=a[i];
	    a[i]=a[min];
	    a[min]=temp;
	}
}
	printf("The sorted elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
