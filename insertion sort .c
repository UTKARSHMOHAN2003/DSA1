#include<stdio.h>
void main()
{
int i,j,a[100] ,n,store;
printf(" enter the no of element requi");
scanf("%d",&n);
printf("enter the array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++) // unsorted sub array
{
    store=a[i];
    j=i-1;// 5>4 sorted subarray
    while(j>=0 && a[j]>store)
    {
        a[j+1]=a[j];
        j=j-1;
        
    }
    a[j+1]=store;
}
printf(" sorted array");
for(i=0;i<n;i++)
{
    printf("%d",a[i]);
}
    
    
    
    
    
    
}
