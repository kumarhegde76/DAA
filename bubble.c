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

  
  printf("Calculating Time  :\n");
  start=clock();
    for(i=0;i<n-1;i++)
    {
      for(j=0;j<n-i-1;j++)
      {
      if(a[j]>a[j+1])
      {
      
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
      }
      }
    }
  end=clock();
  total=(double)(end-start)/CLOCKS_PER_SEC;
  printf("Time taken is :%lf\n\n",total);
  
}

