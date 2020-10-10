
#include<iostream>
#include "things/rectangle.cpp"

int main(){

    Rectangle rec1(10,5);

    //Testing every method in the class works as expected.
    std::cout << "Rectangle constructed with: " << rec1.getHeight() << " height" << " | " << rec1.getWidth() << " width" << std::endl;
    std::cout << "Area of Rectangle: " << rec1.getArea() << std::endl;
    std::cout << "Perimeter of Rectangle: " << rec1.getPerimeter() << std::endl;
}

