#include<stdio.h>
void quicksort(int number[],int first,int last)
{
		int i,j,temp,pivot;

		if(first<last)
		{
			pivot=first;
			i=first;
			j=last;

		
		while(i<j)
		{
			while(number[i]<=number[pivot]&&i<last)
				i++;
			while(number[j]>number[pivot])
				j--;


			if(i<j)
			{
				temp=number[i];
				number[i]=number[j];
				number[j]=temp;
			}
		}

		temp=number[pivot];
		number[pivot]=number[j];
		number[j]=temp;
		quicksort(number,first,j-1);
		quicksort(number,j+1,last);


}
}
int main()
{
	int i,n,number[25];

	printf("Enter the number of elements\n");
	scanf("%d",&n);


	printf("Enter the Elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&number[i]);
	}


	quicksort(number,0,n-1);

	printf("Ordered Elemet is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",number[i]);
	}

	return 0;
}