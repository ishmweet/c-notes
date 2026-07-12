#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
  bool isStudent = true;
  char name[50] = "";
  int age = 0;

  if(isStudent == true){
    printf("You are a student\n");
  }
  else {
    printf("You are NOT a student\n");
  }

  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);
  name[strlen(name) - 1] = '\0';

  if (strlen(name) == 0){
    printf("You did not enter your name\n");
  }
  else{
    printf("Hello %s\n", name);
  }

  printf("Enter your age: ");
  scanf("%d", &age);

  if(age >= 65){
    printf("You are a senior\n");
  }
  else if(age >= 18){
    printf("You are an adult\n");
  }
  else if(age < 0){
    printf("You haven't been born yet\n");
  }
  else if(age == 0){
    printf("Age can't be zero\n");
  }
  else{
    printf("You are not an adult\n");
  }

  return 0;
}
