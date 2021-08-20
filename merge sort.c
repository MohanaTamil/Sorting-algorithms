#include<stdio.h>
int main()
{
    int i,j,n,a[100],b[100];
    printf("\nEnter the no : ");
    scanf("%d",&n);
    printf("\nElements are \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    mergesort(a,0,n-1);
    printf("\nSorted elements\n");
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
    return 0;
}
void mergesort(int a[],int lb,int ub)
{

    if(lb<ub)
    {
        int mid=(lb+ub)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
void merge(int a[],int lb,int mid,int ub)
{
    int i=lb;
    int j=mid+1;
    int k=lb;
    int b[100];
    while(i<=mid&&j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
        }
        else
        {
            b[k]=a[j];
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=a[j];
            k++;
            j++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=a[i];
            k++;
            i++;
        }
    }
}
