#include<stdio.h>
int main()
{
int i,j,n,a[70],temp;
printf("Enter the no: ");
scanf("%d",&n);
printf("\nEnter the array elements : ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=1;i<n;i++)
{
    temp=a[i];
    j=i-1;
    while(j>=0&&a[j]>temp)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=temp;
}
for(i=0;i<n;i++)
    printf("%d\t",a[i]);
return 0;
}
