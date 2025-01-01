#include <iostream>
#include "shape.hpp"
 
using namespace std;

Rectangle::Rectangle() {};

Triangle::Triangle() {};

Circle::Circle() {};

Ellipse::Ellipse() {};

//~ int main(void) {
   //~ Rectangle Rect;
   //~ Triangle  Tri;
   //~ Circle Cir;
   //~ Ellipse Ell;
 
   //~ Rect.setWidth(5);
   //~ Rect.setHeight(7);
   
   //~ // Print the area of the object.
   //~ cout << "Total Rectangle area: " << Rect.getArea(5, 7) << endl;
   //~ cout << "Total Rectangle Volume: " << Rect.getVolume(5, 7, 5) << endl;

   //~ Tri.setWidth(5);
   //~ Tri.setHeight(7);
   
   //~ // Print the area of the object.
   //~ cout << "Total Triangle area: " << Tri.getArea(5, 7) << endl;
   //~ cout << "Total Triangle Volume: " << Tri.getVolume(5, 7, 5) << endl; 

   //~ Cir.setRadius(5);
   
   //~ // Print the area of the object.
   //~ cout << "Total Circle area: " << Cir.getArea(5, PI) << endl;
   //~ cout << "Total Circle Volume: " << Cir.getVolume(5, PI) << endl; 

   //~ // Print the area of the object.
   //~ cout << "Total Ellipse area: " << Ell.getArea(5, 6, PI) << endl;
   //~ cout << "Total Ellipse Volume: " << Ell.getVolume(5, 6, PI) << endl; 

   //~ return 0;
//~ }
   
   // Print the area of the object.
   cout << "Total Triangle area: " << Tri.getArea() << endl; 

   return 0;
}
