/*
 * Author: Donald Jennings
 * Organisation: HYPED
 * Date: 10/10/2020
 * Description: Header file for the Rectangle class.
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

class Rectangle {
    public:
        /*
         * @brief Construct a new Rectangle object 
         * 
         * @param Height
         * @param Width
         */
        Rectangle(int initial_height, int initial_width){
              height = initial_height;
              width = initial_width;
        }

        /*
         * @brief Changes the value of the height
         * 
         * @param Int new Height value
         */
        void setHeight(int new_height);

        /*
         * @brief Changes the value of the width
         * 
         * @param Int new width value
         */
        void setWidth(int new_width);

        /*
         * @brief Returns the height of the rectangle
         * 
         * @return Int Height of Rectangle
         */
        int getHeight();

        /*
         * @brief Returns the width of the rectangle
         * 
         * @return Int Width of the rectangle
         */
        int getWidth();

        /*
         * @brief Takes the height and width values and multiplies them to return the area
         * 
         * @return Int Area of the rectangle
         */
        int getArea();

        /*
         * @brief Computes the sum of - 2 * height and 2 * width
         * 
         * @param Int Perimeter value
         */
        int getPerimeter();    

    private:
        int height;
        int width;
};