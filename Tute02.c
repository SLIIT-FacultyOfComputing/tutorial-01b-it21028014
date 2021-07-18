/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  float distance;
  float amount;
  float remaining_distance;

  printf("Enter the distance: ");
  scanf("%f" , &distance);

  //if the distance is less than 30
  if(distance < 30)
  {
    amount = distance * 50.0;

   //printing the amount
    printf("Sum is: Rs. %.2f" , amount);
 
    return amount;
  }

  //If the distance is greater than 30
  else if (distance > 30 )
  {
    //calculating the remaining remaining distance
    remaining_distance = distance - 30.0;
   
   //calculating the new Amount
    amount = 30 * 50.0 + remaining_distance * 40.0;

    //printint the amount
    printf("Sum is: Rs. %.2f" , amount);

    return amount ;
  }


  //end of the program
  return 0;
}
