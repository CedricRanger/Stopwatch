#include<stdio.h>
#include<windows.h>
#include<dos.h>
int main()
{
    int hr=0,min=0,sec=0;
    char s;
    printf("\t\tPress any Key to Start\n");
    printf("\t\t\tHH:MM:SEC\n");
    getch();
    system("cls");
    start:
    do
    {
        printf("\t\tPress S key to stop\n\t\tPress P to Pause\n");
        printf("\t\t\t%d:%d:%d",hr,min,sec++);
        if(sec>60)
        {
            sec=0;
            min++;
            if(min>60)
            {
                hr++;
                min=0;
            }
        }
        Beep(600,400);
        sleep(1);
        system("cls");
    }while(!kbhit());
    s=getch();
    if(s=='S')
    {
        printf("\t\tStopwatch Stopped At %dhr:%dmin:%dsec",hr,min,sec);
    }
    if(s=='P')
    {
        printf("\t\tStopwatch Stopped At %dhr:%dmin:%dsec\n",hr,min,sec);
        printf("\t\tPress R to Resume\n");
        printf("\t\tPress X to Restart\n");
        printf("\t\tPress S to Stop\n");
        s=getch();
        if(s=='R')
        {
            system("cls");
            goto start;
        }
        if(s=='X')
        {
            system("cls");
            hr=min=sec=0;
            goto start;
        }
        if(s=="S")
        {
            return 0;
        }
    }
}
