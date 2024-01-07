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

void counting(int* arr, int size)
{
	int i, max=arr[0];

	for(i=1; i<size; i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}

	int* count=(int*)malloc((max+1)*sizeof(int));
	int* output=(int*)malloc(size*sizeof(int));
	
	//Initialize count array with zero
	for(i=0; i<=max; i++)
	{
		count[i]=0;
	}

	//store the count at each element
	for(i=0; i<size; i++)
	{
		count[arr[i]]++;
	}

	//store the cumulative count of each array
	for(i=1; i<=max; i++)
	{
		count[i]+= count[i-1];
	}

	//Find the index of each element of the original array in count array and place element in the output array
	for(i=size-1; i>=0; i--)
	{
		output[count[arr[i]]-1] = arr[i];
		count[arr[i]]--;
	}
	
	//copy the sorted elements back into the original array
	for(i=0; i<size;i++)
	{
		arr[i]= output[i];
	}

	free(count);
	free(output);
}

int main()
{
	int n, i;
	
	printf("Enter the size of the array");
	scanf("%d",&n);
	int* arr = (int*)malloc(n*sizeof(int));

	input(arr,n);
	
	counting(arr,n);

	printf("Sorted array: \n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",arr[i]);
	}printf("\n");

	free(arr);
	return 0;
}
