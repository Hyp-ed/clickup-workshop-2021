#include <string>

#ifndef THINGS_PERSON_HPP_
#define THINGS_PERSON_HPP_

class Person {
  public:
    Person(std::string name, int age, float height);
    std::string name_;
	  int age_;
    float height_;
    void setName(std::string);
    void setAge(int);
    void setHeight(float);
    std::string getName();
    int getAge();
    float getHeight();
};

#endif 