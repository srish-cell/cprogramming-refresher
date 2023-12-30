#include<stdio.h>
int main()
{
    int month,date;
    printf("Enter the month and date of birth: ");
    scanf("%d%d",&month,&date);
    if(month==1)
    {
        if(date>=1 && date<=19)
        {
            printf("The Zodiac sign is Capricorn");
        }
        else if(date>=20 && date<=31)
        {
            printf("The Zodiac sign is Aquarius");
        }
        else
        {
            printf("Invalid date");
        }
    }
    else if(month==2)
    {
        if(date>=1 && date<=17)
        {
            printf("The Zodiac sign is Aquarius");
        }
        else if(date>=18 && date<=29)
        {
            printf("The Zodiac sign is Pisces");
        }
        else
        {
            printf("Invalid date");
        }
    }
    else if(month==3)
    {
        if(date>=1 && date<=19)
        {
            printf("The Zodiac sign is Pisces");
        }
        else if(date>=20 && date<=31)
        {
            printf("The Zodiac sign is Aries");
        }
        else
        {
            printf("Invalid date");
        }
    }
    else if(month==4)
    {
        if(date>=1 && date<=19)
        {
            printf("The Zodiac sign is Aries");
        }
        else if(date>=20 && date<=30)
        {
            printf("The Zodiac sign is Taurus");
        }
        else
        {
            printf("Invalid date");
        }
    }
    else if(month==5)
    {
        if(date>=1 && date<=20)
        {
            printf("The Zodiac sign is Taurus");
        }
        else if(date>=21 && date<=31)
        {
            printf("The Zodiac sign is Gemini");
        }
        else
        {
            printf("Invalid date");
        }
    }
    else if(month==6)
    {
        if(date>=1 && date<=20)
        {
            printf("The Zodiac sign is Gemini");
        }
        else if(date>=21 && date<=30)
        {
            printf("The Zodiac sign is Cancer");
        }
        else
        {
            printf("Invalid date");
        }
    }
    else if(month==7)
    {
        if(date>=1 && date<=22)
        {
            printf("The Zodiac sign is Cancer");
        }   
        else if(date>=23 && date<=31)
        {
            printf("The Zodiac sign is Leo");
        }
        else
        {
            printf("Invalid date");
        }
    }
    else if(month==8)
    {
        if(date>=1 && date<=22)
        {
            printf("The Zodiac sign is Leo");
        }
        else if(date>=23 && date<=31)
        {
            printf("The Zodiac sign is Virgo");
        }
        else
        {
            printf("Invalid date");
        }
    }
    else if(month==9)
    {
        if(date>=1 && date<=22)
        {
            printf("The Zodiac sign is Virgo");
        }
        else if(date>=23 && date<=30)
        {
            printf("The Zodiac sign is Libra");
        }
        else
        {
            printf("Invalid date");
        }
    }
    else if(month==10)
    {
        if(date>=1 && date<=22)
        {
            printf("The Zodiac sign is Libra");
        }
        else if(date>=23 && date<=31)
        {
            printf("The Zodiac sign is Scorpio");
        }
        else
        {
            printf("Invalid date");
        }
    }
    else if(month==11)
    {
        if(date>=1 && date<=21)
        {
            printf("The Zodiac sign is Scorpio");
        }
        else if(date>=22 && date<=30)
        {
            printf("The Zodiac sign is Sagittarius");
        }
        else
        {
            printf("Invalid date");
        }
    }
    else if(month==12)
    {
        if(date>=1 && date<=21)
        {
            printf("The Zodiac sign is Sagittarius");
        }
        else if(date>=22 && date<=31)
        {
            printf("The Zodiac sign is Capricorn");
        }
        else
        {
            printf("Invalid date");
        }
    }
    else
    {
        printf("Invalid month");
    }
    