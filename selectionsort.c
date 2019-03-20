#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	int a[50000],i,j,n,temp;
	clock_t start,end;
	double total;
	printf("Enter the Number of Elements\n");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
	a[i]=rand();

	}
	
	start=clock();
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
			if(a[i]>a[j])
			{
			
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
			}
		}
	end=clock();
	total=(double)(end-start)/CLOCKS_PER_SEC;
	printf("%d %lf\n",n,total);
}


