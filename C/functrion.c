# include <stdio.h>
# include <time.h>
# include <stdlib.h>

int getRandnum(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void)
{
    srand(time(NULL));
    int count =0 ;
    for (int i=1; i<=5; i++)
    {
        int num1 = getRandnum(i);
        int num2 = getRandnum(i);

        showQuestion(i, num1, num2);
        int answer =-1;
        scanf("%d", &answer);

        if (answer == -1)
        {
            printf("Good game\n");
            exit(0);
        }
        else if (answer == num1 * num2/* condition */)
        {
            success(i);/* code */
            count +=1;
        }
        
        else
        {
            fail();
        }

        count +=1;
    }
}

int getRandnum(int level)
{
    return rand() % ((level *7)+1);
}
void showQuestion(int level, int num1, int num2)
{
    printf("\n####### Stage %d ##########\n",level);
    printf("%d x %d =  ? \n", num1, num2);
    printf("Enter number : ");
}
void success(int level)
{
    printf("Good\n");
    printf("--- %d gate open\n\n", level);
}
void fail()
{
    printf("fail\n\n");
}