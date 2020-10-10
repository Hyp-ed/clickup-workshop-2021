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
#ifndef WORKSHOP_UTILS_MATH_HPP_
#define WORKSHOP_UTILS_MATH_HPP_

/** @brief      a^n for real number a and integer n
 *
 *  @param[in]  base        real number a in a^n
 *  @param[in]  exponent    integer n in a^n
 *
 *  @return     real value of a^n
 *
 */
double power(double base, int exponent);

#endif