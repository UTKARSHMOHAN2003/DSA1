#include <stdio.h>
int main()
{
int i, l, r, mid, n, data, a[100];
printf("Enter number of elements ");
scanf("%d",&n);
printf("Enter %d integers ", n);
for(i = 0; i < n; i++)
scanf("%d",&a[i]);
printf("Enter value to find");
scanf("%d", &data);
l = 0;
r = n - 1;
mid = (l+r)/2;
while (l <= r) {
if(a[mid] < data)
l= mid + 1;
else if (a[mid] == data) {
printf("%d found at location %d", data, mid+1);
break;
}
else
r = mid - 1;
mid = (l + r)/2;
}
if(l > r)
printf("Not found! %d isn't present in the list.n", data);
return 0;
}










