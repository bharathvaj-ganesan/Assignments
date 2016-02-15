#include<stdio.h>
#include <time.h>

void ms(int* [],int, int);
int binarcolumn_rand();
int main()
{
    	int row,column,i,j;
    	printf("\n Enter the row and column :");
    	scanf("%d%d",&row,&column);
    	int *arr2d[row];
    	for(i=0;i<row;i++)
    	{
       		arr2d[i]=(int *)malloc(column*sizeof(int));
    	}
    	for(i=0;i<row;i++)
    	{
        	for(j=0;j<column;j++)
        	{
           		arr2d[i][j]=0;
        	}
    	}
    	srand(time(NULL));  // Refered internet for srand() function.
	for(i=0; i<row; i++)
    	{
        	for(j=0; j<column; j++)
		{
		    arr2d[i][j] = binarcolumn_rand();
		}
	 }
	 printf("Filling '0' with a number corresponding to surrounding mines...\n");
    	 ms(arr2d, row, column);
	 for(i=0;i<row;i++)
	 {
		 for(j=0;j<column;j++)
                 {
           		printf("%d\t",arr2d[i][j]);
		 }
	 	printf("\n\n\n");
    	}
     return 0;
}
int binarcolumn_rand()
{
	return ((float)rand()/RAND_MAX>0.5)?1:0;  //Refered internet for rand() function and "RAND_MAX" macro concept. 
}
void ms(int *array[], int row, int column)
{
	int i,j,sum;
	int *cell[row];
	for(i=0; i<row;i++)
    	{
		 cell[i] = (int*)malloc(column*sizeof(int));
    	}
	for(i=0; i<row;i++)
	 {
        	for(j=0;j<column;j++)
        	{
            	      cell[i][j] = 0;
	        }
         }
	for(i=0;i<row;i++)
        {
        	for(j=0; j<column; j++)
        	{
			sum = 0;
			if(array[i][j]==0)
			{
				//top
				if(i>0)
                    		sum =sum + array[i-1][j];
				//  below
				if(i<row-1)
                    		sum =sum + array[i+1][j];
				//  left
				if(j>0)
                    		sum =sum + array[i][j-1];
				//  right
				if(j<column-1)
				 sum =sum + array[i][j+1];
				//  top left
				if(i>0&&j>0)
				sum =sum + array[i-1][j-1];
				//  top right
				if(i>0&&j<column-1)
				 sum = sum + array[i-1][j+1];
				//  bottom left
				if(i<row-1&&j>0)
				 sum =sum + array[i+1][j-1];
				//  bottom right
				if(i<row-1&&j<column-1)
				 sum =sum + array[i+1][j+1];
			}
			cell[i][j] = sum>9?6:sum;
		}
	}
	for(i=0; i<row; i++)
        {
              for(j=0; j<column; j++)
	      {
		    if(!array[i][j])
            	    {
        		  array[i][j] = cell[i][j];
        	    }
		    else
            	    {
                	 array[i][j] = 'x';
            	    }
	      }
        }
}
