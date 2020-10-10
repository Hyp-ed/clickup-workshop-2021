#include <bits/stdc++.h> 
using namespace std;

double median(vector<int> n) {
   double m;
    int position; //to store position of median

    //We will first need to sort the vector
    sort(n.begin(), n.end()); 

    //Depending on whether or not vect.size is odd/even, we will have a different formula to work with
    if ((n.size() % 2) != 0) {
        position = ((n.size())/2); //3
        m = (double) n[position];
        
    } else {
        position = ((n.size())/2);
        double helper_division = n[position - 1];
        m = (helper_division + n[position])/2; 
    }
    
    return m;
  
}
int main() {
  double median_value;
  vector<int> n;
  int myint;

  cout << "Please enter some integers (enter 0 to end):\n";

  do {
    cin >> myint;
    n.push_back (myint);
  } while (myint);

  n.pop_back();

  median_value = median(n);
  cout << "Median is: " << median_value << endl;
    
    return 0;
}