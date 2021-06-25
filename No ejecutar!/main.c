#include <stdio.h>
#include <stdlib.h>
#include "windows.h"

int parse(char* path,char* text);

int main()
{
printf("MENU\n1)Actualizar\n2)Salir\n\n");
system("pause");

char m1[30];
char m2[40];

    if(!parse("obs.depend",m1))
    {
        if(!parse("obc.depend",m2))
        {
            int j=0;
            for(int i=0;i<=500;i+=50)
            {
                 j+=10;
                 Beep(0+i,700);
                 system("cls");
                 printf("--------------------------------\n|%s%s%d|\n--------------------------------",m1," %",j);
            }
            system("cls");
            system("color 2");
            printf("---------------------------------------\n| %s!!! :) |\n---------------------------------------\n\n\n",m2);
            Beep(2000,5000);
            }
    }
}

int parse(char* path,char* text)
{
    int retorno=1;
    FILE* pFile = fopen(path,"rb");

    if(pFile != NULL)
    {
       fread(text,1,30,pFile);
       retorno=0;
    }

  return retorno;
}





