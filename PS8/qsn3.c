#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int sz = 3, type;
    void *ptr;


    printf("\nEnter the type of input you are entering : \n");
    printf("\nEnter \n 0 for char\n 1 for integer\n 2 for float \n");
    scanf("%d", &type);
    printf("\nEnter number of elements : \n");
    scanf("%d", &sz);

    /*
    ptr = malloc(sz * sizeof(int));
    *(int*)ptr = 4;

    *(ptr + 1) = 2;
    *(ptr + 2) = 3;

    printf("%d", *(int*)ptr);

}
    */

    if (0 == type)
    {
        ptr = malloc(sz *sizeof(char));
    }
    else if (1 == type)
    {
        ptr = malloc(sz * sizeof(int));
    }
    else if (2 == type)
    {
        ptr = (float *)malloc(sz * sizeof(float));
    }
    printf("\nEnter the %d number of elements :\n", sz);

    for (int i = 0; i < sz; i++)
    {
        /*
        if (0 == type)
        {
            scanf("%c", *ptr[i]);
        }*/
        if (1 == type)
        {
           scanf("%d",&(ptr + i));
        }
        else if (2 == type)
        {
            scanf("%f", &ptr[i]);
        }
    }
    printf("\nArray elements entered are : \n");
    for (int i = 0; i < sz; i++)
    {
        if (0 == type)
        {
            printf("%c ", *(char*)ptr+i);
        }
        else if (1 == type)
        {
           printf("%d ", *(int *)(ptr+i));
        }
        else if (2 == type)
        {
            printf("%f ",  *(float *)ptr);
        }
    }

    printf("\nTest line PS8Qsn3");
    return 0;
}

