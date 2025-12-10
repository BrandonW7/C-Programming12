/*
 * Program Description:
 * This program calculates the area of a square and a circle using pass by reference.
 */

 #include <stdio.h>

 #define PI 3.14
 
 // Function prototypes
 void areaOfSquare(float side, float *squareArea);
 void areaOfCircle(float radius, float *circleArea);
 
 int main() {
     float side, radius;
     float squareArea, circleArea;
 
     // Input values
     printf("Enter side length of the square: ");
     scanf("%f", &side);
     printf("Enter radius of the circle: ");
     scanf("%f", &radius);
 
     // Call functions
     areaOfSquare(side, &squareArea);
     areaOfCircle(radius, &circleArea);
 
     // Display results
     printf("Area of the square: %.2f\n", squareArea);
     printf("Area of the circle: %.2f\n", circleArea);
 
     return 0;
 }
 
 void areaOfSquare(float side, float *squareArea) {
     *squareArea = side * side;
 }
 
 void areaOfCircle(float radius, float *circleArea) {
     *circleArea = PI * radius * radius;
 }
 