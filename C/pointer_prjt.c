#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int level;
int arrayFish[6];
int *cursor;

void initData();
void printFishs();
void decreaseWater(long elaspedTime);
int checkFishAlive();

int main(void)
{
    long startTime = 0; //game start time
    long totalElaspedTime = 0;
    long preElaspedTime = 0;
    
    int num;  //select fishbowl input by user
    initData();
    cursor = arrayFish;  // cursor[1]...cursor[2]...
    startTime = clock(); //return current time.. time unit is 0.001 sec.
    while(1)
    {
        printFishs();
        printf("Which fishbowl water fill ??: ");
        scanf("%d", &num);
        if (num <1 || num>6)
        {
            printf("Wrong input\n");
            continue;
        }
        
        totalElaspedTime = (clock()- startTime)/ CLOCKS_PER_SEC; // total elasped time
        printf("\n\nTotal elapsed time : %ld sec\n", totalElaspedTime);
        preElaspedTime = totalElaspedTime - preElaspedTime; //time check before fill
        printf("Spend time : %ld\n", preElaspedTime);
        decreaseWater(preElaspedTime);  //decrease fish bowl water
        if(cursor[num -1] <=0)  //fill water to fishbowl by user
        {
            printf("%d fish dead.. do not fill water\n", num);
        }
        else if(cursor[num -1]+1 <=100)
        {
            printf("%d fishbowl fill water\n", num);
            cursor[num-1] +=1;
        }
        //level up
        if (totalElaspedTime/20 > level -1)
        {
            level ++; //leve up
            printf("Level up %d to %d \n", level-1, level);
            if (level ==5)
            {
                printf("you success. game end\n");
                exit(0);
            }
        }
        //check fish status
        if(checkFishAlive() == 0 )
        {
            printf("All fish dead \n");
            exit(0);
        }
        else
        {
            printf("Fishs are still alive.\n");
        }
        preElaspedTime = totalElaspedTime;
    }
    return 0;
}
void initData()
{
    level =1;
    for (int i =0; i<6; i++)
    {
        arrayFish[i] =100;
    }
}
void printFishs()
{
    printf("%2d  %3d  %3d  %3d  %3d  %3d \n",1,2,3,4,5,6);
    for (int i =0; i<6; i++)
    {
        printf("%4d ", arrayFish[i]);
    }
    printf("\n\n");
}
void decreaseWater(long elaspedTime)
{
    for(int i = 0; i<6; i++)
    {
        arrayFish[i] -= (level *2* (int)elaspedTime); // control decrease time
        if (arrayFish[i] < 0)
        {
            arrayFish[i] =0;
        }
    }
}
int checkFishAlive()
{
    for(int i =0; i<6; i++)
    {
        if (arrayFish[i] >0)
            return 1; // return True
    }
    return 0;
}