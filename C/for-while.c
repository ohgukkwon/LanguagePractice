#include <stdio.h>

int main()
{
    printf("Input floor number : ");
    int floor = 0;
    scanf("%d", &floor);

    for(int i = 0; i<floor; i++)
    {
        for (int j=i; j<floor-1; j++)
        {
            printf("@");
        }
        for (int k = 0; k<i*2+1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

   /*  for(int i=0; i<5; i++)
    {
        for (int j=1; j<5-i; j++)
        {
            printf("s");
        }
        for (int s=0; s<=i; s++)
        {
            printf("*");
        }
        printf("\n");
    } */
    /* for(int i = 2; i<=9; i++){
        for(int j=1; j<=9; j++){
            int s=0;
            s = i*j;
            printf("%d x %d = %d\n",i,j,s);
            if(j==9){
                printf("\n");
            }
        }
    } */
