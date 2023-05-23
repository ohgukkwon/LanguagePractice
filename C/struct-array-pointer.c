#include <stdio.h>

struct GameInfo {
    char * name;
    int year;
    int price;
    char * maker;

    struct GameInfo * friendgame; //struct relation
};

typedef struct GameInformation {
    char * name;
    int year;
    int price;
    char * maker;

    struct GameInfo * friendgame; //struct relation
} GAME_info;

int main_struct(void)
{
    // name : mygame
    // year : 2018
    // price : 50
    // maker : mycomp

    char * name = "mycomp";
    int year = 2018;
    int price = 50;
    char * maker = "mycomp";

    // name : yougame
    // year : 2017
    // price : 30
    // maker : youcomp

    char * name2 = "youcomp";
    int year2 = 2017;
    int price2 = 30;
    char * maker2 = "youcomp";

    //struct example
    struct GameInfo gameinfo1;
    gameinfo1.name = "mygame";
    gameinfo1.year = 2017;
    gameinfo1.price = 50;
    gameinfo1.maker = "mycomp";

    printf("--game information--\n");
    printf("  Name    :  %s\n", gameinfo1.name);
    printf("  Year    :  %d\n", gameinfo1.year);
    printf("  Price   :  %d\n", gameinfo1.price);
    printf("  Maker   :  %s\n", gameinfo1.maker);

        //struct example
    struct GameInfo gameinfo2 = {"yougmae", 2018, 30,"youcomp"};
    
    printf("--game information--\n");
    printf("  Name    :  %s\n", gameinfo2.name);
    printf("  Year    :  %d\n", gameinfo2.year);
    printf("  Price   :  %d\n", gameinfo2.price);
    printf("  Maker   :  %s\n", gameinfo2.maker);

    //struct array
    struct GameInfo gameArray[2] = {
        {"mygmae", 2017, 50,"mycomp"},
        {"yougmae", 2018, 30,"youcomp"}
    };

    //struct pointer
    struct GameInfo * gamePtr;
    gamePtr = &gameinfo1;
    printf("--Ptr game information--\n");
    printf("  Name    :  %s\n", (*gamePtr).name);
    printf("  Year    :  %d\n", (*gamePtr).year);
    printf("  Price   :  %d\n", (*gamePtr).price);
    printf("  Maker   :  %s\n", (*gamePtr).maker);

    printf("--Ptr game information--\n"); //same way.
    printf("  Name    :  %s\n", gamePtr->name);
    printf("  Year    :  %d\n", gamePtr->year);
    printf("  Price   :  %d\n", gamePtr->price);
    printf("  Maker   :  %s\n", gamePtr->maker);

    // struct relation.
    gameinfo1.friendgame = &gameinfo2;
    printf("--Prelation company information--\n"); //same way.
    printf("  Name    :  %s\n", gameinfo1.friendgame->name);
    printf("  Year    :  %d\n", gameinfo1.friendgame->year);
    printf("  Price   :  %d\n", gameinfo1.friendgame->price);
    printf("  Maker   :  %s\n", gameinfo1.friendgame->maker);

    //typedef 
    GAME_info game2 = {"structyougmae", 2018, 30,"youcomp"};
    
    printf("--game information--\n");
    printf("  Name    :  %s\n", game2.name);
    printf("  Year    :  %d\n", game2.year);
    printf("  Price   :  %d\n", game2.price);
    printf("  Maker   :  %s\n", game2.maker);


    return 0;
}