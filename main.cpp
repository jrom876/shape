// main.cpp
#include <iostream>
#include "shape.hpp"

int main(void) {
    // Shape shape(0,0);
    Rectangle Rect(0,0,0);
    Triangle  Tri(0,0,0);
    Circle  Cir(0,0);
    Ellipse Ell(0,0,0,0);
 // Rectangle
    Rect.setLength(10);
    Rect.setWidth(50);
    Rect.setHeight(70);
    // Rect.setValues(20,20,20); 
    cout << "Rectangle area: " << Rect.getArea(Rect.getWidth(),Rect.getHeight()) << endl;
    cout << "Rectangle volume: " << Rect.getVolume(Rect.getLength(),Rect.getWidth(),Rect.getHeight()) << endl;
    printf("\n");

// Triangle
    Tri.setLength(10);
    Tri.setWidth(55.1);
    Tri.setHeight(77.7);
    // Tri.setValues(10,64.7,77.2);
    cout << "Triangle area: " << Tri.getArea(Tri.getWidth(),Tri.getHeight()) << endl; 
    cout << "Triangle volume: " << Tri.getVolume(Tri.getLength(),Tri.getWidth(),Tri.getHeight()) << endl; 
    printf("\n");

// Circle
    Cir.setRadius(3);
    double pi = PI;
    cout << "Circle area: " << Cir.getArea(Cir.getRadius(),pi) << endl; 
    cout << "Circle volume: " << Cir.getVolume(Cir.getRadius(),pi) << endl; 
    printf("\n");
    
    // // Ellipse
    // Ell.setRadius(2);
    // // double pi = PI;
    // cout << "Ellipse area: " << Ell.getArea(Ell.getRadius(),pi) << endl; 
    // cout << "Ellipse volume: " << Ell.getVolume(Ell.getRadius(),pi) << endl; 
    // printf("\n");

    return 0;
}
