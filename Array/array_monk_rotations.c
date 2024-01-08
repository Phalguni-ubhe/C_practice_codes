#include <stdio.h>

void rotations(int* arr, int iNoOfElements, int iRotations)
{
	int i,j,temp;

    for(i=0; i<=iRotations-1; i++)
    {   
		temp = arr[iNoOfElements-1]; //saving last number in temp
        for(j=iNoOfElements-1; j>0; j--)
        {
            arr[j] = arr[j - 1];  // moving numbers forward
        }
        arr[0] = temp; // last no. in 1st poition from temp
    }

}

void PrintArray(int* arr, int iNoOfElements)
{
	int i;//itterations 
	for(i=0; i<=iNoOfElements-1; i++)
	{
		printf("%d ",arr[i]);
	}printf("\n");
}

int main()
{
	int testcase, itt_testcase, i, iRotations = 2, iNoOfElements=5 ;

	//printf("No of test cases: ");
	scanf("%d",&testcase);
	
	for(itt_testcase=1; itt_testcase<=testcase; itt_testcase++)
	{
		//printf("\n Enter the size of array: and enter no of rotations: ");
		scanf("%d \t %d",&iNoOfElements ,&iRotations);

		int arr[iNoOfElements];

		//printf("\n Enter the elements of array: ");
		for(i=0; i<iNoOfElements; i++)
		{
			scanf("%d",&arr[i]);
		}

		//ratating the elements in array
		rotations(arr,iNoOfElements,iRotations);

		//Printing the rotated array 
		PrintArray(arr,iNoOfElements);
	}

	printf("\n");
	return 0;
}