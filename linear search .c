#include<stdio.h>
void main()
{
    int a[20],i,n,data;
    printf(" enter the no of element required in array ");
    scanf("%d",&n);
    printf(" enter  the array elements");
    for (i=0; i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf(" enter the element to be found ");
    scanf("%d", &data);
    for (i=0;i<n;i++)
    {
        if (a[i]==data)
        {
            printf(" element found %d,index at%d",data,i);
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
