/*
program to calculate fine for overdue books
author: Francis Otieno 
reg no:D33-2473-2023
version 1
Date:4.03.2025
*/

#include <stdio.h>//preprocessor 

int main(){
  int bookID, dueDate, returnDate, daysOverdue, fineRate, fineAmount;

  // Input from user
  printf("Enter Book ID:\n");
  scanf("%d", &bookID);
  printf("Enter Due Date:\n ");
  scanf("%d", &dueDate);
  printf("Enter Return Date:\n ");
  scanf("%d", &returnDate);
  
  // Calculate days overdue
  daysOverdue = returnDate - dueDate;

  // Determine fine rate
  if (daysOverdue <= 7){
  printf("fineRate = 20");
  } 
  else if (daysOverdue <=8 && daysOverdue <=14){
  printf("fineRate = 50");
  } 
  else  if(daysOverdue >= 15){
  printf("fineRate = 100");
  }

  // Calculate fine amount
  fineAmount = daysOverdue * fineRate;

  // Display results
  printf("Book ID: %d\n", bookID);
  printf("Due Date: %d\n", dueDate);
  printf("Return Date: %d\n", returnDate);
  printf("Days Overdue: %d\n", daysOverdue);
  printf("Fine Rate: %d\n", fineRate);
  printf("Fine Amount: %d\n", fineAmount);

  return 0;//execution successful 
        }