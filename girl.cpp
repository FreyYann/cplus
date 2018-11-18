//
// Created by yan   xinzhou on 11/18/18.
//

#include "girl.h"

girl::girl(const std::string &name, int age) : name(name), age(age) {}

const std::string &girl::getName() const {
    return name;
}

void girl::setName(const std::string &name) {
    girl::name = name;
}

int girl::getAge() const {
    return age;
}

void girl::setAge(int age) {
    girl::age = age;
}

bool girl::operator<(const girl &rhs) const {
    return std::tie(name, age) < std::tie(rhs.name, rhs.age);
}

bool girl::operator>(const girl &rhs) const {
    return rhs < *this;
}

bool girl::operator<=(const girl &rhs) const {
    return !(rhs < *this);
}

bool girl::operator>=(const girl &rhs) const {
    return !(*this < rhs);
}

std::ostream &operator<<(std::ostream &os, const girl &girl1) {
    os << "name: " << girl1.name << " age: " << girl1.age;
    return os;
}
