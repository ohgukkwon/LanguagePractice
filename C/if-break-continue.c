#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    srand(time(NULL));
    int num = rand() %100;
    printf("number is :  %d \n", num);

    int chance = 5;
    int answer = 0;
    while (chance >0)
    {
        printf("You hae chance %d time(s)", chance--);
        printf("--input number (1~100): ");
        scanf("%d", &answer);
        if (answer > num)
        {
            printf("decrease number\n");
        } 
        else if (answer < num)
        {
            printf("increase numner\n");
        }
        else if (answer = num)
        {
            printf("Correct answer\n") ;
            break;
        }
        else
        {
            printf("unkwon error\n\n");
        }
        
        if (chance ==0)
        {
            printf("Fail \n\n");
        }
    }

    return 0;
}