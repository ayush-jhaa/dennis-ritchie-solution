#include<stdio.h>
#include<stdlib.h>
#include<string.h>

static char daytab[2][13] = {
 {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
 {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};


int day_of_year(int ,int ,int);
void month_day(int ,int  ,int *, int *);

int main()
{
 int year=2000,month=5,day=24;
 int yearday=125;

 int pday;
 int pmonth;

 printf("conversion of year month and day to day of year..\n");
 printf("enter year , month and day:\n");
 scanf("%d %d %d",&year,&month,&day);

 printf("%d\n",day_of_year(year,month,day));

 printf("conversion from year and year day to month and day\n");
 printf("enter year and year day..\n");
 scanf("%d %d",&year,&yearday);

 month_day(year,yearday,&pmonth,&pday);

 printf("%d %d\n",pmonth,pday);

}



 /* day_of_year: set day of year from month & day */
 int day_of_year(int year, int month, int day)
 {
 int i, leap;
 if(month <1 && month >12)
 {
   printf("incorrect month");
   return 1;
 }
 leap = year%4 == 0 && year%100 != 0 || year%400 == 0;

 if(leap)
 {
    if(day<1 && day>31)
    {
      printf("entered input is incorrect\n");
      return 1;

    }
    if(month==2)
     { 
       if(!(day>=1 && day<=29))
	{
	printf("wrong input..\n");
     	return 1;
	}
     }

 
 }

 else
 {
      if(day<1 && day>31)
      {
        printf("wrong date");
	return 1;
      }
     if( month==2 )
      {
	 if(!(day>=1 && day<=28))
       {
         printf("wrong input\n");
	 return 1;
	}
      }
      

 }

 for (i = 1; i < month; i++)
 day += daytab[leap][i];
 return day;

 }

void month_day(int year, int yearday,int *pmonth ,int *pday)
 {
  int i=1, leap;
 leap = (year%4 == 0 && year%100 != 0 || year%400 == 0);

 if(leap)
 {
    if(yearday>=1 && yearday<=366);
    else
    {
      printf("incorrect day in year");
      return ;
    }
 }
 else 
 {
     if(yearday<=365);
     else
     {
       printf("incorrect day in year");
       return ;
     }
 }

for (; yearday > daytab[leap][i]; i++)

{
 yearday -= daytab[leap][i];
}

 *pmonth=i;
 *pday = yearday;


}

