#include <stdio.h>

int main()
{
	int a[100],i,j,n,temp;
	printf("\nEnter the number of value");
	scanf("%d",&n);
	printf("\nEnter the values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe biggest combination is..");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		 if(a[i]<a[j])
		 {
		 	temp=a[i];
		 	a[i]=a[j];
		 	a[j]=temp;
		 }
		}
	}
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
		}
	return 0;
}

