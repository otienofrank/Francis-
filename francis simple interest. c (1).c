        /*
author:Francis Otieno
reg no.D33-2473-2023
Program:to find simple interest 
date:20/2/2025
*/
#include<stdio.h>
int main(){
// variable decelerations and initialization;
int principle;
int rate;
int time;
int simple_interest;
printf("program to calculate simple interest: \n");
    printf("enter principle amount:\n");
    scanf("%d",&principle);
    printf("enter rate of interest :\n");
    scanf("%d",&rate);
    printf("enter the time in year:\n");
    scanf("%d",&time);
    simple_interest=(principle*rate*time)/100;
    printf ("the simple interest is %d", simple_interest);
    return 0;
}
