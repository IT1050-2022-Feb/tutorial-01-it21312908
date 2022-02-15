/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  //variable declaration
  int mark1, mark2 ;
  float avg;

  printf("Enter mark 1 : ");          //prompt
  scanf("%d",&mark1);                 //read mark 1

  printf("Enter mark 2 : ");          //prompt
  scanf("%d",&mark2);                 //read mark 2 

  avg = (mark1 + mark2) / 2.0;        //calculating the average

  printf("Average marks : %.2f",avg);    //display the average
  return 0;
}//end function main

