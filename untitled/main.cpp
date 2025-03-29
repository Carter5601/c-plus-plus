
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double CalcRectanglePerimeter(double height, double width);
double PrintRectanglePerimeter(double height, double width);
void DoubleRectanglePerimeter(double& height, double& width);
double CalcCircumferenceOfCircle(double radius);
double CalcAreaOfCircle(double radius);
double CalcVolumeOfSphere(double radius);
void Swap(int& valueA, int& valueB);
void Swap(double& valueA, double& valueB);
//place function prototypes here...


const double PI = 3.14;


//main function
int main(){

    cout << "Getting this line to print earns you points!" << "\n";

    double height = 0.0;
    double width = 0.0;
    double radius = 0.0;

    cin >> height >> width >> radius;

    PrintRectanglePerimeter(height, width);
    cout << endl;
    cout << CalcRectanglePerimeter(height, width) << endl;
    cout << "... about to double height and width...\n";
    DoubleRectanglePerimeter(height, width);
    PrintRectanglePerimeter(height, width);

    return 0;
}

double CalcRectanglePerimeter(double height, double width) {
    cout << fixed << setprecision(1);
    return((height * 2.0) + (width * 2.0));
}

double PrintRectanglePerimeter(double height, double width) {
    cout << fixed << setprecision(1);
    double perimeter;
    perimeter = CalcRectanglePerimeter(height, width);
    cout << "A rectangle with height " << height << " and width " <<
         width << " has a perimeter of " << perimeter << ".";
    return 0;
}

void DoubleRectanglePerimeter(double& height, double& width) {
    cout << fixed << setprecision(1);
    height = 2 * height;
    width = 2 * width;
}

double CalcCircumferenceOfCircle(double radius) {
    cout << fixed << setprecision(1);
    return(2 * PI * radius);
}

double CalcAreaOfCircle(double radius) {
    cout << fixed << setprecision(1);
    return(PI * radius * radius);
}

double CalcVolumeOfSphere(double radius) {
    cout << fixed << setprecision(1);
    return((4.0/3.0) * PI * radius * radius * radius);
}

void Swap(int& valueA, int& valueB) {
    int tempVariable = valueA;
    valueA = valueB;
    valueB = tempVariable;
}

void Swap(double& valueA, double& valueB) {
    double tempVariable1 = valueA;
    valueA = valueB;
    valueB = tempVariable1;
}



