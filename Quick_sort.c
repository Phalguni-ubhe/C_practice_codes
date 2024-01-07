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

int partition(int* arr, int lb, int ub)
{
	int pivot, start, end,temp;

	pivot = arr[lb]; // choose the pivot as first element
	start = lb + 1; //Start from the next element

	end = ub;

	while(start <= end)
	{
		while(start<=end && arr[start]<=pivot)
		{
			start++;
		}
		
		while(arr[end]>pivot)
		{
			end--;
		}

		if(start<=end)
		{
			temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;
			start++;
			end--;
		}
	}
	
	//place the pivot in its sorted position
	temp = arr[lb];
	arr[lb]=arr[end];
	arr[end]=temp;

	return end; //Return the partition index
}

void Quicksort(int* arr, int lb, int ub)
{
	if(lb<ub)
	{
		int loc = partition(arr,lb,ub);
		Quicksort(arr, lb, loc-1);
		Quicksort(arr, loc+1, ub);
	}
}

int main()
{
	int n, lb, ub, i;
	
	printf("Enter the size of the array");
	scanf("%d",&n);
	int* arr = (int*)malloc(n*sizeof(int));

	input(arr,n);
	
	Quicksort(arr,0,n-1);

	printf("Sorted array: \n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",arr[i]);
	}printf("\n");

	free(arr);
	return 0;
}