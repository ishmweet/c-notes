#include <stdio.h>
#include <stdbool.h> // this is required in order to use booleans in the program

int main() {

  int age = 24; // int for whole numbers
  int year = 2026;

  float gpa = 4.5; // float for decimal values
  float price = 18.38;

  char grade = 'A'; // single character
  char symbol = '!';

  char name[] = "Dexter Morgan"; // array of characters
  char food[] = "Marinated chicken";

  bool isOnline = true; // true can be written as 1 and false can be written as 0
  bool forSale = false;

  printf("You are %d years old. \n", age);
  printf("The year is %d. \n", year);
  printf("\n");

  printf("Your gpa is %f \n", gpa);
  printf("The price is $%f \n", price);
  printf("\n");

  printf("Your grade is %c. \n", grade);
  printf("Your fav symbol is %c \n", symbol);
  printf("\n");

  printf("Hello, %s. \n", name);
  printf("My fav food is %s.\n", food);
  printf("\n");

  if(isOnline){
    printf("You are ONLINE.\n");
  }
  else{
    printf("You are OFFLINE.\n");
  }

  if(forSale){
    printf("This IS for sale.\n");
  }
  else{
    printf("This is NOT for sale.\n");
  }

  return 0;
}
