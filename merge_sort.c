#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void input(int* arr, int n)
{
	int i;

	printf("\n Enter the Numbers: \n ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
}

void merge(int *arr, int lb, int mid, int ub)
{
	int i,j,k;
	int b[ub-lb+1];

	i = lb;
	j = mid+1;
	k = 0;

	while(i<=mid && j<=ub)
	{
		if(arr[i]<=arr[j])
		{
			b[k] = arr[i];
			i++;
		}
		else
		{
			b[k] = arr[j];
			j++;
		}
		k++;
	}
	
	while(i<=mid)
	{
		b[k] = arr[i];
		i++;
		k++;
	}
	
	while(j<=ub)
	{
		b[k] = arr[j];
		j++;
		k++;
	}

	for(i=0; i<k; i++)
	{
		arr[lb+i] = b[i];
	}
}

void mergesort(int* arr, int lb, int ub)
{
	int mid;
	
	if(lb<ub)
	{
		mid = (lb+ub)/2;
		mergesort(arr,lb,mid);
		printf("\n ms1 done");
		mergesort(arr, mid+1, ub);
		printf("\n ms2 done");
		merge(arr, lb,mid,ub);
		printf("\n m done\n");
	}
}

int main()
{
	int n, i;
	
	printf("Enter the size of the array");
	scanf("%d",&n);
	int* arr = (int*)malloc(n*sizeof(int));

	input(arr,n);

	for(i=0; i<n; i++)
	{
		printf("%d\t",arr[i]);
	}printf("\n");

	
	mergesort(arr,0,n-1);

	printf("Sorted array: \n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",arr[i]);
	}printf("\n");

	free(arr);
	return 0;
}