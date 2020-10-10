/*
 * Author: Antonio León Villares
 * Organisation: HYPED
 * Date: 10/10/2020
 * Description: Calculates the dot product of 2 numerical arrays (given that they are of the same size).
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


#include <iostream>

using namespace std;

int dot_product(int arr1[], int arr2[], int size1, int size2) {

    int product = 0;

    if (size1 != size2) {
        cout << "You need to provide arrays of the same size!";  // dot product only defined for vectors of the same size
    }
    else {
        for (int i = 0; i < size1; i++) {
            product += (arr1[i] * arr2[i]);  // multiply pairwise elements, and them to the total
        }
    }

    return product;
}

int main() {
    int arr1[] = {1,2,3}; 
    int arr2[] = {3,2,1};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);  // determine sizes of the arrays
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    cout << dot_product(arr1, arr2, size1, size2) << "\n"; // expect 10
}