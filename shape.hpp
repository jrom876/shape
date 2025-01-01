// shape.hpp

#ifndef SHAPE_HPP
#define SHAPE_HPP

using namespace std;

// #define PI (double)3.14159265;

#define PI	(double)3.14159265358979323846 // ad infinitum

// Base class
class Shape {       
    private:
        double length = 0;
        double width = 0;
        double height = 0;
        double radius = 0;
        double vertex = 0;
        double foci = 0;

    public:
        double getArea(double,double) {return width * height;}
        double getVolume(double,double,double) {return length * width * height;}
        void setValues(double w, double h) {width = w; height = h;}
        void setValues(double len, double w, double h) {length = len; width = w; height = h;}
        void setLength(double len) {length = len;}
        void setWidth(double w) {width = w;}
        void setHeight(double h) {height = h;}
        void setRadius(double r) {radius = r;}
        double getLength() {return length;}
        double getWidth() {return width;}
        double getHeight() {return height;}
        double getRadius() {return radius;}
};

// Derived classes
class Rectangle: public Shape {
    private:        
        double length, width, height;
    public:
        Rectangle(double len, double w, double h);
        double getArea(double w, double h) {return w * h;}
        double getVolume(double len, double w, double h) {return len * w * h;}
};

class Triangle: public Shape {
    private:        
        double length, width, height;
    public:
        Triangle (double len, double w, double h);
        double getArea(double w, double h) {return 0.5 * w * h;}
        double getVolume(double len, double w, double h) {return 0.33333333 * len * w * h;}
};

class Circle: public Shape {
    private:        
        double radius;
        double pi;
    public:
        Circle (double r, double pi);
        double getArea(double r,double pi) {return (pi * r * r);}
        double getVolume(double r,double pi) {return  1.33333333 * pi * r * r * r;}
};

class Ellipse: public Shape {
    private:        
        double a, b;
        double c;
        double pi;
    public:
        Ellipse (double a, double b, double c, double pi);
        double getArea(double a, double b, double pi) {return (pi * a * b);}
        double getVolume(double a, double b,double pi) {return  1.33333333 * pi * a * b * pi * pi;}
};

#endif
