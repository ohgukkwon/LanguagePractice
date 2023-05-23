#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct {
    char * name ;
    int age;
    char * charactor;
    int level;
}CAT;

//current cat occupy
int collection[5] = {0,0,0,0,0};

//cats list
CAT cats[5];

void initCats();   //init cats information
void printCat();
int checkCollection();

int main()
{
    srand(time(NULL));
    initCats();
    while (1)
    {
        printf("--Random select cat\nEnter any key");
        getchar();

        int selected = rand() %5;
        printCat(selected);
        collection[selected] = 1;

        int collectAll = checkCollection();
        if (collectAll ==1)
        {
            break;
        }
    }
    return 0;
}

void initCats()
{
    cats[0].name = "Black";
    cats[0].age = 5;
    cats[0].charactor = "good";
    cats[0].level = 1;

    cats[1].name = "Yel";
    cats[1].age = 4;
    cats[1].charactor = "bad";
    cats[1].level = 2;

    cats[2].name = "Red";
    cats[2].age = 3;
    cats[2].charactor = "cold";
    cats[2].level = 3;

    cats[3].name = "Grn";
    cats[3].age = 2;
    cats[3].charactor = "hot";
    cats[3].level = 4;

    cats[4].name = "Blu";
    cats[4].age = 1;
    cats[4].charactor = "normal";
    cats[4].level = 5;

}

void printCat(int selected)
{
    printf("\n You selected Cat\n");
    printf("name        : %s\n",cats[selected].name);
    printf("age         : %d\n",cats[selected].age);
    printf("charactor   : %s\n",cats[selected].charactor);
    printf("level       : ");

    for(int i=0; i<cats[selected].level; i++)
    {
        printf("%s","o");
    }
    printf("\n");
}

int checkCollection()
{
    int collectAll = 1;

    printf("\n==Current Cats list== \n");
    for(int i = 0; i<5; i++)
    {
        if (collection[i]== 0)
        {
            printf("%10s","(empty)");
            collectAll =0;
        }
        else
        {
            printf("%10s", cats[i].name);
        }
    }
    printf("\n===================================================\n");
    if (collectAll)
    {
        printf("\n You ahve all Cats\n");

    }

    return collectAll;
}