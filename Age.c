/*
  Created by: Thulani Ndlovu
  Date: 23/12/2022
  Title: Age Calculator
*/

#include <stdio.h>

int currentYear();
int BirthAge();

void Age();

int main(void)
{
  Age();
    return 0;
}

int currentYear()
{
    unsigned int current_year=0;
    printf("Enter the current Year: ");
    scanf("%u", &current_year);

    return current_year; 
}

int BirthYear()
{   
    unsigned int birthyear=0;
    printf("Enter your Birth Year: ");
    scanf("%u",&birthyear);

    return birthyear;
}



void Age()
{
    unsigned int age = 0;
    age = currentYear()-BirthYear();

    printf("you are ");
    printf("%u",age);
    printf(" years old this year\n");
}