#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,k,n;
	printf("Enter the Number :\n");
	scanf("%d",&n);
	int A[n][n];
	printf("Enter the Elements\n");
	for(i=0;i<n;i++)
	
		for(j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
		}
		
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		
		{
			for(k=0;k<n;k++)
			{
				if(A[i][k]+A[k][j]<A[i][j])
					A[i][j]=A[i][k]+A[k][j];
			}
		}
	}	

	printf("The Warshall Matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",A[i][j]);
	}



}