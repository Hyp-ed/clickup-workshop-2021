#include "things/person.hpp"
#include <iostream>
using namespace std;


int main(){
  string name = "Celina";
  int age = 20;
  float height = 1.70;
  Person p(name, age, height);
//   p.setName("Celina");
//   p.setAge(20);
//   p.setHeight(1.70);
  cout << p.name_ << "\n";
  cout << p.age_ << "\n";
  cout << p.height_;
  return 0;
}
