#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int h[50000];
void heapify(int h[50], int n)
{
	int i, j, l, k, heap, v;
	for(i=n/2; i>=1; i--)
	{
		k=i;
		v=h[k];
		heap=0;
		while(!heap && (2*k)<=n)
		{
			j=2*k;
			if(j<n)
			{
				if(h[j] < h[j+1])
				{
					j=j+1;
				}
			}
			if(v>=h[j])
				heap=1;
			else
			{
				h[k]=h[j];
				k=j;
			}	
		}
		h[k]=v;
	}
}

void main()
{
	int i, n, size, t;
	clock_t start, end;
	double total;
	printf("Enter the number of nodes\n");
	scanf("%d",&n);
	//printf("Enter the elements: \n");
	for(i=1;i<=n;i++)
	{
	h[i]=rand();
	}
	start=clock();
	heapify(h,n);
//	printf("Elements heapified: \n");
	//for(i=1;i<=n;i++)
	//	printf("%d\t",h[i]);
	for(i=n;i>=1;i--)
	{
		t=h[1];
		h[1]=h[i];
		h[i]=t;
		size=i-1;
		heapify(h,size);
	}
	end=clock();

	//printf("Elements sorted: \n");
	//for(i=1;i<=n;i++)
	//	printf("%d\t",h[i]);
	total = (double)(end-start)/CLOCKS_PER_SEC;
	printf("Time taken is = %lf\n",total);
}