//Shreyes Gagganapally
//5626926

#include <stdio.h>
#include <math.h>

//function declaration
double askForUserInput();
void getPoints(double *x1, double *y1, double *x2, double *y2);
double getDistance(double x1, double y1, double x2, double y2);
double calculateDistance();
double calculatePerimeter();
double calculateArea(); 
double calculateWidth(); 
double calculateHeight();

int main(void) 
{ 
    calculateDistance(); 
    calculatePerimeter(); 
    calculateArea(); 
    calculateWidth(); 
    calculateHeight(); 
    return 0; 
    
}

//asks for user input
double askForUserInput() {
    double input;
    scanf("%lf", &input);
    return input;
}

//helper function to get points and print them to avoid reusing code
void getPoints(double *x1, double *y1, double *x2, double *y2) {
 
    printf("Enter x1: ");
    *x1 = askForUserInput();
    printf("Enter y1: ");
    *y1 = askForUserInput();

    printf("Enter x2: ");
    *x2 = askForUserInput();
    printf("Enter y2: ");
    *y2 = askForUserInput();

    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", *x1, *y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", *x2, *y2);
}

//helper function to get distance without printing unneeded lines
double getDistance(double x1, double y1, double x2, double y2) {
    //uses distance formula
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

//prints result of distance calculation between inputted points
double calculateDistance() {
    double x1, y1, x2, y2;
    getPoints(&x1, &y1, &x2, &y2); 

    double distance = getDistance(x1, y1, x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);

    return distance;
}

//calculates width of space formed by x and y values
double calculateWidth() {
    double x1, y1, x2, y2;
    getPoints(&x1, &y1, &x2, &y2);

    //calculate the distance between x values
    double width = fabs(x2 - x1);

    printf("The width of the city encompassed by your request is %.2lf\n", width);

    return 2.0;
}

//calcualtes height of space formed by x and y values
double calculateHeight() {
    double x1, y1, x2, y2;
    getPoints(&x1, &y1, &x2, &y2);

    //calculate the distance between y values
    double height = fabs(y2 - y1);
    printf("The height of the city encompassed by your request is %.2lf\n", height);

    return 2.0;
}


//calculates perimeter of space formed by x and y values
double calculatePerimeter() {
    double x1, y1, x2, y2;
    getPoints(&x1, &y1, &x2, &y2);

    //find width and height
    double width = getDistance(x1, 0, x2, 0);
    double height = getDistance(y1, 0, y2, 0);
    //it seems that fabs() could be used here, but instructions dictated I must use the distance function

    double perimeter = 2 * width + 2 * height; 
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

    return 3.0;
}

//calculates area of space formed by x and y values
double calculateArea() {
    double x1, y1, x2, y2;
    getPoints(&x1, &y1, &x2, &y2);  // Get points and print them

    //find width and height
    double width = fabs(x2 - x1);
    double height = fabs(y2 - y1);

    //calculate area
    double area = width * height;
    printf("The area of the city encompassed by your request is %.2lf\n", area);

    return 3.0;
}


