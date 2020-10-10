/*
 * Author: Franz Miltz
 * Organisation: HYPED
 * Date: 2020-10-10
 * Description: Contains pure functions that are frequently used in
 * calculations.
 *
 *    Copyright 2018 HYPED
 *    Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License. You may obtain a
 * copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations under
 * the License.
 */

#include "functions.hpp"

// This function assumes exponent > 0 and computes base^exponent
// in O(log(exponent)) time.
//
// This function does not explicitly handle precision at all,
// but there might be a benefit in *mostly* multiplying numbers
// of the same orders of magnitude.
static double positive_exponent_power(double base, int exponent) {
  if (exponent == 1) {
    return base;
  }
  // Observe that if n % 2 == 0, a^n = a^(n/2) * a^(n/2)
  // finds a^(n/2), exponent > 0 thus shifting is the same as DIV 2
  double with_half_exponent = positive_exponent_power(base, exponent >> 1);
  // the result is the product of calculations with exponent / 2
  double result = with_half_exponent * with_half_exponent;
  if (exponent % 2 == 1) {
    result *= base;  // adding lost factor for odd exponents
  }
  return result;
}

// This is just a wrapper function to handle edge cases that we can
// then ignore in our main calculation.
// 
// The acutal computation happens in `positive_exponent_power`.
double power(double base, int exponent) {
  if (exponent < 0) {
    // we use a^(-n) = 1/(a^n) to ensure n > 0
    return 1.0 / positive_exponent_power(base, -exponent);
  }
  if (exponent == 0) {
    return 1.0;  // a^0 = 1
  }
  return positive_exponent_power(base, exponent);
}