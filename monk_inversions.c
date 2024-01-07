#include<stdio.h>

int main()
{
    int rounds, repetition=0, isize=3 ,i ,j, internali, internalj, count=0;

    //printf("Enter the no of rounds: ");
    scanf("%d",&rounds);

    int CountArr[rounds];

    for(repetition =0; repetition<=rounds-1; repetition++)
    {
        //printf("\n Enter the size of matrix: ");
        scanf("%d",&isize);

        int imatrix[isize][isize]; //as no of rows and columns is same 

        //printf("\n Enter the elements in matrix: ");
        for(i=0; i<isize; i++)
        {
            for(j=0; j<isize; j++)
            {
                scanf("%d",&imatrix[i][j]);
            }
        }

        //inversion 

        for(i=0; i<=isize-1; i++)
        {
            for(j=0; j<=isize-1; j++)
            {
                for(internali=0; internali<=isize-1; internali++)
                {
                    for(internalj=0; internalj<=isize-1; internalj++)
                    {  
                        if(internali>=i && internalj>=j && imatrix[internali][internalj]<imatrix[i][j])
                        {
                                count++;
                        }
                    }
                }
            }
        }
        CountArr[repetition]= count;
        count = 0;
    }

    
    for(i=0; i<=rounds-1; i++)
    {
        printf("%d \n",CountArr[i]);
    }

    printf("\n");
    return 0;
}