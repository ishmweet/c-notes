#include <stdio.h>

int main() {

    int age = 21;
    float gpa = 8.75;
    char grade = 'A';
    char name[] = "Dexter";
    double precise_gpa = 8.756789;
    long population = 1400000000L;
    unsigned int distance = 5000;

    // %d for int
    printf("Age: %d\n", age);

    // %f for float (default shows 6 decimal places)
    printf("GPA: %f\n", gpa);

    // %.2f limits decimal places to 2
    printf("GPA (rounded): %.2f\n", gpa);

    // %c for a single character
    printf("Grade: %c\n", grade);

    // %s for a string
    printf("Name: %s\n", name);

    // %lf for double in printf (works same as %f here)
    printf("Precise GPA: %lf\n", precise_gpa);

    // %ld for long int
    printf("Population: %ld\n", population);

    // %u for unsigned int
    printf("Distance: %u\n", distance);

    // multiple specifiers in one line
    printf("%s is %d years old with a GPA of %.2f\n", name, age, gpa);

    // scanf example — %lf is REQUIRED here for double (unlike printf)
    double height;
    printf("Enter your height in meters: ");
    scanf("%lf", &height);
    printf("Your height is %.2lf meters\n", height);

    return 0;
}
