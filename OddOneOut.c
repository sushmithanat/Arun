#include<stdio.h>
#include<conio.h>
void main()
{
int j,i,n,a[100],e=0,c=0,k;
clrscr();
printf("\nEnter the number of elements : ");
scanf("%d",&n);
printf("\nEnter the array elements : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
e=e+1;
if(e>1)
{
for(j=0;j<n;j++)
{
if(a[j]%2!=0)
{
k=a[j];
break;
}
}
}
}
else
{
c=c+1;
if(c>1)
{
for(j=0;j<n;j++)
{
if(a[j]%2==0)
{
k=a[j];
break;
}
}
}
}
}
printf("\nThe different number is %d.",k);
getch();
}
