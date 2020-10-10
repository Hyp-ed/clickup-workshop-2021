/*
 * Author: Atte Niemi
 * Organisation: HYPED
 * Date: 10/10/2020
 * Description: Calculates the mean of an array
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
#include "array_mean.hpp"

#include <iostream>

float arrayMean(const int *array, const int size) 
{
  int sum = 0;
  for (int i = 0; i<size; ++i) {
    sum += array[i];
  }
  return ((float) sum) / size;
}

int main() 
{
  int test1[5] = {1,2,3,4,5};
  std::cout << arrayMean(test1, 5) << "\n";
  int test2[6] = {1,2,3,4,5,6};
  std::cout << arrayMean(test2, 6);
  return 0;
}