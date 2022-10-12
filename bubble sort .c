#include<stdio.h>

void main()
{
int a[100],i,n,j,temp,flag;
printf(" enter the no of element requried");
scanf("%d",&n);
printf(" enter the no of element of arrray");
for(i=0;i<n;i++)
scanf(" %d",& a[i]);
for ( i=0;i<n-1;i++)
{
    flag=0;
    for(j=0;j<n-1-i;j++)
    {
        if (a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    if (flag==1)
    break;
    }
}

printf("sorted array");
for (i=0;i<n;i++)
{
    printf("%d",a[i]);
}



}

