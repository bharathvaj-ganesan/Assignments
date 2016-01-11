#include <stdio.h>
int main()
{
     printf("The size must be an odd number between 1 and 100.\n");
     int i,j,n,row,col,next_row,next_col,m_array[100][100];;
     printf("Enter size of magic square: ");
     scanf("%d", &n);
     int s = (n / 2);
     int max = n * n;
     m_array[0][s] = 1;
     for (i = 2, row = 0, col = s; i < max + 1; i++) {
     if ((row - 1) < 0)
     {
           next_row = n - 1;
     }
     else
     {
          next_row = row - 1;
     }
     if ((col + 1) > (n - 1))
     {
          next_col = 0;
     }
     else
     {
          next_col = col + 1;
     }
     if (m_array[next_row][next_col] > 0)
     {
            if (row > (n - 1))
            {
                next_row = 0;
            }
            else
            {
                next_row = row + 1;
                next_col = col;
            }
        }
        row = next_row;
        col = next_col;
        m_array[row][col] = i;
    }

      for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", m_array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
