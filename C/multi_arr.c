#include <stdio.h>

int main(void)
{
    int arr[4][2] = {
        {1,2},
        {1,2},
        {1,2},
        {1,2}
        };

    for (int i=0; i<=3; i++)
    {
        for(int j=0; j<=1; j++)
        {
            printf("%d, %d arr is %d\n",i,j,arr[i][j]);
        }
    }
    
}