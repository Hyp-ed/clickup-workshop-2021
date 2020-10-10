#include "person.hpp"

Person::Person(std::string name, int age, float height): name_(name), age_(age), height_(height) {
}

void Person::setName(std::string name) {
  name_ = name;
}

void Person::setAge(int age) {
  age_ = age;
}

void Person::setHeight(float height) {
  height_ = height;
}

std::string Person::getName() {
  return name_;
}

int Person::getAge() {
  return age_;
}

float Person::getHeight() {
  return height_;
}

