#include<stdio.h>
int main()
{
	int i,j,n,temp,a[100],flag;
	printf("Enter the no of elements:\n");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	  {
	  	scanf("%d",&a[i]);
	  }
	  for(i=0;i<n-1;i++)
	  {
	  	flag=0;
	  	for(j=0;j<n-1-i;j++)
	  	{
	  		if(a[j]>a[j+1])
	  		{
	  			temp=a[j];
	  			a[j]=a[j+1];
	  			a[j+1]=temp;
	  			flag=1;
			  }
		  }
		  if(flag==0)
		   break;
}
printf("The sorted array elements:\n");
     for(i=0;i<n;i++)
	  printf("%d ",a[i]);
 return 0;
}
