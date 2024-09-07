#include <stdio.h>
#include <math.h>
#include<ctype.h>

// pi is defined as:
#define PI 3.14159


double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();


double askForUserInput(const char *prompt);

int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

// user input below:
double askForUserInput(const char *prompt) {
    double value;
    printf("%s", prompt);
    scanf("%lf", &value);
    return value;
}

// distance bewteen da two points
double calculateDistance() {
    double x1 = askForUserInput("Enter x1: ");
    double y1 = askForUserInput("Enter y1: ");
    double x2 = askForUserInput("Enter x2: ");
    double y2 = askForUserInput("Enter y2: ");
    
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);
    
    return distance;
}

// perimeter of da circle
double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = 2 * PI * (distance / 2); // Assuming distance is the diameter
    
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    return 2.0; // Example difficulty rating
}

// area of da circle
double calculateArea() {
    double distance = calculateDistance();
    double radius = distance / 2; 
    double area = PI * pow(radius, 2);
    
    printf("The area of the city encompassed by your request is %.2f\n", area);
    return 3.0; 
}

// width
double calculateWidth() {
    double x1 = askForUserInput("Enter x1: ");
    double x2 = askForUserInput("Enter x2: ");
    
    double width = fabs(x2 - x1);
    
    printf("The width of the city encompassed by your request is %.2f\n", width);
    return 2.0; 
}

// height
double calculateHeight() {
    double y1 = askForUserInput("Enter y1: ");
    double y2 = askForUserInput("Enter y2: ");
    
    double height = fabs(y2 - y1);
    
    printf("The height of the city encompassed by your request is %.2f\n", height);
    return 2.0; 
}
