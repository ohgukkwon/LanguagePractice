#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    srand(time(NULL));
    int answer;
    int treatment = rand() %4;
    printf("treatment # %d\n", treatment);
    
    int cntShowBottle = 0;
    int preCntShowBottle = 0;

    for(int i =1; i<=3; i++)
    {
        int bottle[4] = {0,0,0,0};
        do{
            cntShowBottle = rand() % 2 + 2;
        } while(cntShowBottle == preCntShowBottle);
        preCntShowBottle = cntShowBottle;

        int isInclude = 0;
        printf("%d time try\n", i);

        for(int j=0; j < cntShowBottle; j++)
        {
            int randBottle = rand() %4;
            if (bottle[randBottle] == 0 )
            {
                //printf("randBottle # %d\n", randBottle);
                bottle[randBottle] = 1;
                
                if (randBottle == treatment)
                {
                    isInclude =1;
                }
                //printf("isInclude = %d\n", isInclude);
            }
            else
            {
                j--;
            }
        }
        
        for(int k =0; k <4; k++)
        {            
            if(bottle[k] == 1 )
            {
                printf("%d ", (k+1));
            }
                
        }
        printf("Spray medicine\n");
        

        if (isInclude == 1)
        {
            printf("Success \n");
        }
        else
        {
            printf("Fail \n");
        }
        printf("Enter any key to continue\n\n");
        getchar();
    } 
    printf("What is medicine ? : ");
    scanf("%d", &answer);

    if (answer == treatment +1)
    {
        printf("Answer is correct !!\n");
    }
    else
    {
        printf("Wrong answer. Medicine is %d  !!\n", treatment +1);
    }
    return 0;
}
