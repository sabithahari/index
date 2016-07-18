#include<stdio.h>
void function(int *a,int n)
{
    int i;
for(i=0;i<n;i++)
{
if(a[i]==i)
{
printf("%d%d",i,a[i]);
}
}
printf("the element not found");
}
int main(void)
{
int a[10],i,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
function(a,n);
return 0;
}
