//219948360 S Maphumulo

#include <stdio.h>
#include <stdlib.h>
#include "ESD.h"

int main()
{
    int simz[6],semaphore,s,i,j;
    char exit;


    semaphore=0;

    simz[1]=10;
    simz[2]=5;
    simz[3]=30;
    simz[4]=10;
    simz[5]=7;
    simz[6]=0;

    if(semaphore==0);

    do
    {
        setColor(36);

    gotoxy(1,2);
    printf(" x: %d",simz[1]);
    gotoxy(1,4);
    printf(" y: %d",simz[2]);
    gotoxy(1,6);
    printf(" w: %d",simz[3]);
    gotoxy(1,8);
    printf(" h: %d",simz[4]);
    gotoxy(1,10);
    printf(" b: %d",simz[5]);
    gotoxy(1,12);
    printf(" f: %d",simz[6]);
    gotoxy(1,14);
    printf(" Press E to edit");
    gotoxy(1,16);
    printf(" Press Q to quit");
    gotoxy(1,18);
    printf(" Press S to show",simz[6]);





    gotoxy(20+simz[1],simz[2]);
    printf("\xDA");
    gotoxy(20+simz[1],simz[2]+simz[4]);
    printf("\xC0");
    gotoxy(20+simz[1]+simz[3],simz[2]);
    printf("\xBF");
    gotoxy(20+simz[1]+simz[3],simz[2]+simz[4]);
    printf("\xD9");


    for(j=simz[1]+1;j<simz[1]+simz[3];j++)
    {
        gotoxy(20+j,simz[2]);
        printf("\xC4");
        gotoxy(20+j,simz[2]+simz[4]);
        printf("\xC4");
    }
    for(i=simz[2]+1;i<simz[2]+simz[4];i++)
    {
        gotoxy(20+simz[1],i);
        printf("\xB3");
        gotoxy(20+simz[1]+simz[3],i);
        printf("\xB3");
    }


    exit=getch();
    }while (exit!='Q');
    return 0;
}
void clrscrA()
{
    int i,j;
        for(i=0;i<25;i++)
        {
        for(j=0;j<20;j++)
            {
            setColor(0x36);
            gotoxy(j,i);
            printf(" ");
            }
        }
        gotoxy(0,0);
}
void clrscrB()
{

    int i,j;
        setColor(0x3);
        for(i=0;i<25;i++)
        {
        for(j=20;j<80;j++)
            {
            gotoxy(j,i);
            printf(" ");
            }
        }
        gotoxy(0,0);
}



