#include<stdio.h>
#include<Windows.h>
int main()
{
    int i;
    char a[12]={'H','A','P','P','Y',' ','P','O','N','G','A','L'};
    /* "HAPPY PONGAL" will be repeated infinite times */
    while(1)
    {
        for(i=0;i<=12;i++)
        {
            Sleep(500);
            printf("%c",a[i]);
        }
         for(i=0;i<=12;i++)
        {
            printf("\b \b");
        }
    }
     return 0;
}
