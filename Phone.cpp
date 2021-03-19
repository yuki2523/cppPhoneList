//
// Created by hcy on 2021/3/15.
//

#include <iostream>
#include <string>
#include "Phone.h"

using namespace std;

Phone::Phone() {
    this->_phone = "";
    this->_name = "";
    this->_gender = 0;
    this->_age = 0;
    this->next_phone = nullptr;
}

Phone::Phone(string phone, string name, int gender, int age) {
    this->_phone = phone;
    this->_name = name;
    this->_gender = gender;
    this->_age = age;
    this->next_phone = nullptr;
}

Phone::~Phone() {
    cout << this->getName() << this->getPhone() << "已释放" << endl;
}

void Phone::setPhone(string phone) {
    this->_phone = phone;
}

void Phone::setName(string name) {
    this->_name = name;
}

void Phone::setGender(int gender) {
    this->_gender = gender;
}

void Phone::setAge(int age) {
    this->_age = age;
}

void Phone::setNextPhone(Phone *next_phone) {
    this->next_phone = next_phone;
}

string Phone::getPhone() {
    return this->_phone;
}

string Phone::getName() {
    return this->_name;
}

int Phone::getGender() {
    return this->_gender;
}

int Phone::getAge() {
    return this->_age;
}

Phone * Phone::getNextPhone() {
    return this->next_phone;
}

void Phone::phoneInfo(Phone* phone) {
    if (!phone) {
        cout << "不存在，无法提供详情！" << endl;
        return;
    }
    cout << phone->getName() << "\t"
        << phone->getPhone() << "\t"
        << phone->getAge() << "\t"
        << phone->getGender() << "\t" << endl;
}
