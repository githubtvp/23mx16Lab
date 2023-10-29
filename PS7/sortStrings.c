#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <string.h>

void main()
{
    char *x[20];//array of 20 char pointers => array of 20 strings 'coz char* means a string
    int i, n = 0;
    void reorder(int n, char *x[]);
   // clrscr();   
    printf("Enter no. of String : ");
    scanf("%d", &n);
   // printf("\n %d", n);
    printf("Enter %d Strings :", n);
    for (i = 0; i < n; i++)
    {
        x[i] = (char *)malloc(20 * sizeof(char));
        scanf("%s", x[i]);//notice scanning with a string formatter and no &
    }
    reorder(n, x);
    printf("\nReordered list is : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d %s\n", i + 1, x[i]);
    }
    //getch();
    return;
}

void reorder(int n, char *x[])
{
    int i, j;
    char t[20];//a temp var to store a string temp during swap, max 19 char
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (strcmp(x[i], x[j]) > 0)
            {
                strcpy(t, x[j]);
                strcpy(x[j], x[i]);
                strcpy(x[i], t);
            }
    return;
}