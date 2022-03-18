#include <iostream>
#include <math.h>
using namespace std;

class Math {
public:
    double a;
    double b;
    double c;
    double getArea();
    double sun;
};

double Math::getArea() {
    return sqrt(b*b-4.0*a*c);
}

int main() {
    Math sun;
    sun.a = 1;
    sun.b = 4;
    sun.c = 3;
    cout << "sun is " << sun.getArea() << endl;
}