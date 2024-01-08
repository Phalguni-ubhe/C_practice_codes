#include<stdio.h>

int main()
{
    //Size of array 
    int iarray[12]={111,222,333,444,555,666,777,888,999,110,112,123};

    int size;

    size = sizeof(iarray);  /*size = sizeof(array_name) 
                            Meaning  sizeof(size_of_array * size_of_datatype)
                            12 * 4 bytes as integer , for character 2 bytes*/

    printf("\n size of array is %d",size);

    // size of element 
    int iElementSize;

    iElementSize = sizeof(iarray[0]);   

    printf("\n The Size of Element from array is %d",iElementSize);  //output will be 4 as datatype is int 

    // no of elements in array
    int NoOfElements;

    NoOfElements = sizeof(iarray) / sizeof(iarray[0]); // sizeof array / size of datatype ... 48/4 = 12

    printf("\n No of elements in array is %d",NoOfElements);

    // printing index no and element no. and value at that position 
    int itt;
    for(itt=0; itt<=NoOfElements; itt++)
    {
        printf("\n The Number %d is present at position %d in array which index is %d",iarray[itt] ,itt+1 ,itt);
    }

    //3-D Array
    int i, j, k, row, col, tab;

    printf("\n Enter the dimensions of array \n table & Row & Column");
    scanf("%d %d %d",&tab ,&row,&col);

    //declare the array
    int array[tab][row][col];

    //initialization 
    printf("\n Enter the elements in array row by row: ");
    for(k=0; k<tab; k++)
    {
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                scanf("%d",&array[k][i][j]);
            }
        }
    }    

    printf("The array is:\n");
    for(k=0; k<tab; k++)
    {
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                printf("%d \t",array[k][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    } 

    //Modify the table

    int nt;
    printf("\n Enter the number of table which is to be changed: ");
    scanf("%d",&nt);
    printf("Enter the new table: \n");
    for(k=nt-1; k<=tab; k++)
    {
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                scanf("%d",&array[k][i][j]);
            }
        }
        break;
    }   

    printf("The modified array is:\n");
    for(k=0; k<tab; k++)
    {
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                printf("%d \t",array[k][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("\n");
    return 0;
    
}