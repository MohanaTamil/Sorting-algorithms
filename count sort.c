
/*#include<stdio.h>
int main()
{
	int i,j,c[100],b[100],a[100],n,k=0;
	printf("\nEnter the no : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the %d element : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	
		for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	k=0;
	for(i=0;i<n;i++)
	{
		if(k<a[i])
		k=a[i];
	}
	for(i=0;i<=k;i++)
	{
		c[i]=0;
	}
	for(i=0;i<n;i++)
	{
		c[a[i]]=c[a[i]]+1;
	}
	for(i=1;i<=k;i++)
	{
		c[i]=c[i]+c[i-1];
	}
	for(i=n-1;i>=0;i--)
	{
		b[c[a[i]]]=a[i];
		c[a[i]]=c[a[i]]-1;
	}
	for(i=0;i<n;i++)
	{
		a[i]=b[i];
	}
	printf("\nAfter sorting: \n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
*/
#include<stdio.h>

int main()
{
   int i,j,c[100],b[100],a[100],n,k;
   printf("\nEnter the no : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     printf("\nEnter the %d element : ",i);
     scanf("%d",&a[i]);
   }
   printf("The array is : ");
    for(i=1;i<=n;i++)
   {
     printf("%d ",a[i]);
   }
    k=0;
   for(i=1;i<=n;i++)
   {
     if(k<a[i])
     k=a[i];
   }
   for(i=1;i<=k;i++)
   {
     c[i]=0;
   }
   for(i=1;i<=n;i++)
   {
      c[a[i]]=c[a[i]]+1;
   }
   for(i=1;i<=k;i++)
   {
      c[i]=c[i]+c[i-1];
   }
   for(i=n;i>0;i--)
   {
    b[c[a[i]]]=a[i];
    c[a[i]]=c[a[i]]-1;
   }
   for(i=1;i<=n;i++)
   {
     a[i]=b[i];
   }
   printf("\nAfter sorting: \n");
   for(i=1;i<=n;i++)
    printf("%d ",a[i]);
  return 0;
}

