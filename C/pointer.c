#include <stdio.h>
#include <time.h>

int main(void)
{
    clock_t starttime =0;
    clock_t totalElaspedtime = 0;
    starttime = clock();
    //totaltime = 0;
    int num;
    scanf("%d", &num);
    totalElaspedtime = clock() - starttime; //CLOCKS_PER_SEC;
    printf("total time is %ld\n", totalElaspedtime);

}


/* void swap(int a, int b);
void swap_addr(int * a, int * b);
void change_arr(int * ptr);

int main(void)
{
    int arr[3] = {5,10,15};
    int *ptr = arr;

    for (int i=0; i<3; i++)
    {
        printf("array[%d] value is %d \n", i, arr[i]);
    }

    for (int j=0; j<3; j++)
    {
        printf("ptr[%d] value is %d\n", j, ptr[j]);
    }

    int a =10;
    int b =20;
    printf("a address %d\n", &a);
    printf("b address %d\n", &b);

    printf("before swap a=> %d, b=> %d\n", a,b);
    swap(a,b);
    printf("after swap a=> %d, b=> %d\n\n", a,b);

    printf("before swap_addr a=> %d, b=> %d\n", a,b);
    swap_addr(&a,&b);
    printf("after swap_addr a=> %d, b=> %d\n\n", a,b);


    return 0;
    int arr2[3] = {10, 20, 30}; 
    change_arr(arr2);           // same as Code change_arr(&arr2[0]);

    for (int i=0; i<3; i++)
    {
        printf("arr2[%d] is %d\n", i, arr2[i]);
    }
}
void change_arr(int * ptr)
{
    ptr[2] =50;
} 
void swap(int a, int b) 
{
    printf("inside swap a address %d\n", &a);
    printf("inside swap b address %d\n", &b);

    int temp = a;
    a =b;
    b = temp;
    printf("inside swap a=> %d, b=> %d\n", a,b);
}
void swap_addr(int * a, int * b)
{
    int temp = *a;
    *a =*b;
    *b = temp;
    printf("inside swap_addr a=> %d, b=> %d\n", *a,*b);
} */