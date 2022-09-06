#include<stdio.h>
void main()
{

    for(int i=1;i<=5;i++)
    {
        for(int space=1;space<=5-i;space++)
        {
            printf("*");
        }
        for (int k=1;k<=2*i-1;k++)
        {
            printf(" ");
        }
        for(int l=1;l<=5-i;l++)
        {
            printf("*");
        }
        printf("\n");

    }
    for(int x=4;x>=1;x--)
    {
        for(int y=1;y<=5-x;y++)
        {
            printf("*");
        }
        for (int z=1;z<=2*x-1;z++)
        {
            printf(" ");
        }
        for(int y=1;y<=5-x;y++)
        {
            printf("*");
        }
        printf("\n");
    } 
    
 }
