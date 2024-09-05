#include <stdio.h>

#define TRUE 1
#define FALSE 0

int dayValid,monthValid,yearValid;

int testData()
{
    if ((dayValid == TRUE) && (monthValid == TRUE) && (yearValid == TRUE)){
    printf("OK");
    return 0;
    }

    else{
    printf("ERRO");
    return 0;
    }
}

int main()
{

    int day,month,year;
    scanf("%d", &day);
    scanf("%d", &month);
    scanf("%d", &year);

//validação do dia

    if ((day < 1) || (day > 31))
    {dayValid = FALSE;
     testData();}

    else
    {
        if ((day == 31) && ((month == 4) || (month == 6) || (month == 9) || (month == 11)))
        {dayValid = FALSE;
         testData();}

        else{
            if (((day == 30) || (day == 31)) && (month == 2))
            {dayValid = FALSE;
             testData();}

            else{
                dayValid = TRUE;

//validação do mês

                if ((month < 1) || (month > 12))
                {monthValid = FALSE;
                 testData();}

                else
                {
                    monthValid = TRUE;

//validação do ano

                if ((year < 0) || (year > 2024))
                    {yearValid = FALSE;
                     testData();}

                else
                {
                    yearValid = TRUE;

                    if ((day ==  29) && (month == 2))   //teste de ano bissexto
                    {float a,b;
                    a = year%4;
                    b = year%100;

                    if ((a == 0) && (b != 0))
                        {yearValid = TRUE;
                        testData();}
                    else
                        {yearValid = FALSE;
                         testData();}
                    }

//resposta final
                    else {testData();}
                    }
                }
            }
        }
    }
}
