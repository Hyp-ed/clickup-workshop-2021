/*
 * Author: Donald Jennings
 * Organisation: HYPED
 * Date: 10/10/2020
 * Description: Contains Testing for the Rectangle Class.
 *
 *    Copyright 2018 HYPED
 *    Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file
 *    except in compliance with the License. You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software distributed under
 *    the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 *    either express or implied. See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#include<iostream>
#include "things/rectangle.cpp"

int main(){
    Rectangle rec1(10,5);
    
    //Testing every method in the class works as expected.
    std::cout << "Rectangle constructed with: " << rec1.getHeight() << " height" << " | " << rec1.getWidth() << " width" << std::endl;
    std::cout << "Area of Rectangle: " << rec1.getArea() << std::endl;
    std::cout << "Perimeter of Rectangle: " << rec1.getPerimeter() << std::endl;
}

