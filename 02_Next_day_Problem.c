#include<stdio.h>

int leapYear(int year){
    return ((year%4==0&& year% 100 !=0) || year%400==0);

}

int main(){
    int day, month, year;
    printf("Enter the date in DD/MM/YYYY format");
    scanf("%d %d %d",&day, &month, &year);
    
    int dayInMonth []= {31, 28+ leapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31};

    while (day<1 || day > dayInMonth[month-1] || month<1 || month > 12 || year<1812 || year>2013){
        if(day<1 || day > dayInMonth[month-1])
            printf("Day out of index");
        if(month<1 || month > 12)
            printf("Month out of index");
        if(year<1812 || year>2013)
            printf("Year out of range");
        
        return 1;
    }
    day++;
    if (day> dayInMonth[month-1]){
        day=1;
        month++;
        if (month>12){
            month=1;
            year++;
        }
        printf("Next date is %d %d %d",day, month, year);
        return 1;
    }
}