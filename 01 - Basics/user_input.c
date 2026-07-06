#include <stdio.h>

int main() {
    // basic user input with scanf
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);   // & gives scanf the memory address to write into
    printf("You are %d years old.\n\n", age);

    // reading a float
    float height;
    printf("Enter your height in meters: ");
    scanf("%f", &height);
    printf("Your height is %.2f meters.\n\n", height);

    // reading a double (must use %lf, unlike printf)
    double weight;
    printf("Enter your weight in kg: ");
    scanf("%lf", &weight);
    printf("Your weight is %.2lf kg.\n\n", weight);

    // reading a single character
    char grade;
    printf("Enter your grade (A/B/C): ");
    scanf(" %c", &grade);
    printf("Your grade is %c.\n\n", grade);

    // reading a string (word only, no spaces)
    char name[50];
    printf("Enter your name (no spaces): ");
    scanf("%s", name);
    printf("Hello, %s!\n\n", name);

    // reading a string (with spaces)
    char name2[50];
    getchar(); // consume '\n'
    printf("Enter your full name: ");
    fgets(name2, sizeof(name2), stdin);
    printf("Hello, %s\n\n", name2);

    // combining multiple values in one line
    int day, month, year;
    printf("Enter your birth date (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);
    printf("Birth date: %d/%d/%d\n", day, month, year);

    return 0;
}
