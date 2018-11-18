//
// Created by yan   xinzhou on 11/18/18.
//

#ifndef NEW_GIRL_H
#define NEW_GIRL_H

#include <string>
#include <ostream>

class girl {
public:
    girl(const std::string &name, int age);

private:
public:


    int getAge() const;

    void setAge(int age);

    bool ill;

    virtual  void sex()=0;

    const std::string &getName() const;

    void setName(const std::string &name);

    bool operator<(const girl &rhs) const;

    friend std::ostream &operator<<(std::ostream &os, const girl &girl1);

    bool operator>(const girl &rhs) const;

    bool operator<=(const girl &rhs) const;

    bool operator>=(const girl &rhs) const;

    bool operator==(const girl &rhs) const {
        return std::tie(name, age) == std::tie(rhs.name, rhs.age);
    }

    bool operator!=(const girl &rhs) const {
        return !(rhs == *this);
    }
private:
    std::string name;

    int age;
};


#endif //NEW_GIRL_H
