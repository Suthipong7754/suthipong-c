#include<stdio.h>
 
int main()
{
    int squareSize, row, col;
    scanf("%d", &squareSize);
    for(row=0; row<squareSize; row++)
    {
        if(row==0 || row==squareSize-1)
        {
            printf("#");
            for(col=0; col<squareSize-1; col++)
            {
                printf(" #");
            }
             
            continue;
        }
         
        printf("#");
         
        for(col=0; col<squareSize-2; col++)
        {
            printf("#");
        }
         
        printf("#\n");
        printf("#\n");
    }
     
    return 0;
}
