/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
//function main begind program execution
int main() {
  //variable declaration
  int no, count = 1, ans = 0;

  printf("Enter no : ");        //prompt
  scanf("%d",&no);              //read a number

  while(count <= no)
  {
    ans = ans + count;
    ++count;
  }
  
  printf("sum = %d",ans);          //display the sum
  return 0;
}//end function main

