#include <iostream>

using namespace std;

int dot_product(int arr1[], int arr2[], int size1, int size2) {

    int product = 0;

    if (size1 != size2) {
        cout << "You need to provide arrays of the same size!";
    }
    else {
        
        for (int i = 0; i < size1; i++) {
            product += (arr1[i] * arr2[i]);
        }
    }

    return product;
}

int main() {
    int arr1[] = {1,2,3}; 
    int arr2[] = {3,2,1};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    cout << dot_product(arr1, arr2, size1, size2) << "\n";
}