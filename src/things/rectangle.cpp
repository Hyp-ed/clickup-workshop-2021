

#include "rectangle.hpp"


void Rectangle::setHeight(int hei){

    h= hei;

}

void Rectangle::setWidth(int wid){

    w = wid;

}

int Rectangle::getHeight(){

    return h;

}

int Rectangle::getWidth(){

    return w;

}

int Rectangle::getArea(){

    return getHeight() * getWidth();

}

int Rectangle::getPerimeter(){

    return (2*getHeight()) + (2*getWidth());

}