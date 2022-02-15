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
//function main begins program execution
int main() {
  
  //variable declaration
   float distance , price;

  printf("Enter distance : ");        //prompt
  scanf("%f",&distance);              //read distance

  if(distance <= 30)
  price = distance * 50.00;

  else
  price = (30 * 50.00) + (distance - 30) * 40.00;

  printf("Amount : %.2f",price);     //display price 
  return 0;
} //end function main
