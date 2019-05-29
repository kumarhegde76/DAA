#include<stdio.h>
#include<stdlib.h>
int count=0;

void BFS(int a[20][20],int n,int visited[20],int source)
{
	int q[20],f,r,u,v;
	f=0;r=-1;
	count++;
	visited[source]=count;
	q[++r]=source;
	while(f<=r)
	{
		u=q[f++];
		for(v=1;v<=n;v++)
		{
			if(a[u][v]==1&&visited[v]==0)
			{
				q[++r]=v;
				count++;
				visited[v]=count;
			}
		}

	}


}

int main()
{
	 int a[20][20],n,i,j,source,visitorder[20],visited[20];
	 printf("Enter the No of Vertices:\n");
	 	scanf("%d",&n);
	 	printf("Enter the matrix\n");
	 	for(i=1;i<=n;i++)
	 	{
	 		for(j=1;j<=n;j++)
	 		{
	 			scanf("%d",&a[i][j]);

	 		}
	 	}
	 	for(i=1;i<=n;i++)
	 		visited[i]=0;
	 	printf("Enter The source Node\n");
	 	scanf("%d",&source);
	 	BFS(a,n,visited,source);
	 	for(i=1;i<=n;i++)\
	 	{
	 	if(visited[i]==0)
	 	{
	 		BFS(a,n,visited,i);
	 	}
	 }
	 	for(i=1;i<=n;i++)
	 	{
	 		visitorder[visited[i]]=i;
	 	}
	 	printf("The BFS Order is \n");
	 	for(i=1;i<=n;i++)
	 	{
	 		printf("%c\t",64+visitorder[i]);
	 	}

