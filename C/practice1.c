#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctype.h>

int fishBowl[6];
int level;
int *cursor;

void initData();
void printFish();
void decreaseWater(long elaspedTime);
int checkFishAline();

int main(void)
{
    time_t startTime = time(NULL);
    time_t elaspedTime = 0;
    time_t totalTime = 0;

    initData();
    int num;
    cursor = fishBowl;

    while(1)
    {
        printFish();
        printf("\nenter Fishbowl number : ");
        scanf("%d", &num);
        if (num <1 || num>6)
        {
            printf("wrong number\n");
            continue ;
        }
        totalTime = time(NULL) - startTime;
        elaspedTime = totalTime - elaspedTime;
        printf("\nTotal time is %ld\n", totalTime);
        printf("Elasped Time is %ld\n", elaspedTime);

        decreaseWater(elaspedTime);
        if (cursor [num-1]<=0)
        {
            printf("%d Fish dead\n", num);
        }
        else if(cursor[num-1]+1 <=100)
        {
            printf("%d fishbowl water fill\n\n", num);
            cursor [num -1] += 1;
        }

        if (totalTime/20 > level-1)
        {
            level ++;
            printf("Level up %d to %d\n",level-1, level);
            if(level ==5)
            {
                printf("Game succes, End Game\n");
                exit(0);
            }
        }
        if (checkFishAline() ==0)
        {
            printf("All fish dead\n");
            exit(0);
        }
        else
        {
            printf("Fishs are still alive\n");
        }
        elaspedTime = totalTime;
    }
    return 0;
}

void initData()
{
    level = 1;
    for(int i=0; i<6; i++)
    {
        fishBowl[i] = 100;
    }
}
void printFish()
{
    printf("%3d %3d %3d %3d %3d %3d\n",1,2,3,4,5,6);
    for(int i=0; i<6; i++)
    {
        printf("%4d",fishBowl[i]);
    }
    printf("\n");
}
void decreaseWater(long elaspedTime)
{
    for(int i=0; i<6; i++)
    {
        fishBowl[i] -= (level * 1 * (int)elaspedTime);
        if(fishBowl[i] <=0)
        {
            fishBowl[i] =0;
        }
    }
}
int checkFishAline()
{
    for(int i=0; i<6; i++)
    {
        if(fishBowl[i] >0 )
        return 1;
    }
    return 0;
}