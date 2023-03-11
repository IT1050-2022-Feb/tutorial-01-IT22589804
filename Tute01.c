/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main()
{

  float sub1, sub2, avarage; //Creating variables

  printf("Enter the marks of first subject : ");
  scanf("%f", &sub1); //storing the first subject marks
  printf("Enter the marks of second subject : ");
  scanf("%f", &sub2); //storing the second subject marks

  avarage = (sub1 + sub2) / 2; //calculating the avarage mark

  printf("Avarge marks of the two subjets is %.2f", avarage); //displaying the avarge mark

  return 0;
}
