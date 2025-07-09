#include <stdio.h>

int main() {
    int i, j, k = 1;
    int rows = 4; 
    int space;

    for (i = 1; i <= rows; i++) 
    {
        int numbersInRow = 2 * i - 1 ;
        space = rows - i;
        for (j = 1; j <= space; j++) 
        {
            printf("   ");
        }    
        for (j = 1; j <= numbersInRow; j++)
        {
            printf("%2d ", k);
            k++;
        }

        printf("\n");
    }

    return 0;
}
