//
// Created by hcy on 2021/3/14.
//

#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(string name) {
    this->_name = name;
}

Student::~Student() {
    cout << this->getName() << "已删除" << endl;
}

string Student::getName() {
    return this->_name;
}

void Student::setName(string name) {
    this->_name = name;
}