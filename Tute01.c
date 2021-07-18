/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1;
  int mark2;
  float average;


  //asking user to enter the mark 1
  printf("Enter the mark  for the subject 1: ");
  scanf("%d" , &mark1);

  //asking user to ener the mark 2
  printf("Enter the mark for the subject 2: ");
  scanf("%d" , &mark2); 

  //finding the average mark;
  average = (mark1 + mark2)/ 2.0;

  //printing the average of the marks

  printf("The average mark of the subjects are : %.2f" , average);


  
  return 0;
}

