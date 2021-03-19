//
// Created by hcy on 2021/3/15.
//

#ifndef PROJECT1_PHONELIST_H
#define PROJECT1_PHONELIST_H

#include <iostream>
#include <string>
#include "Phone.h"

using namespace std;

class PhoneList {
public:
    Phone* first_phone;
    int length; // 不超过1000
    PhoneList();
    ~PhoneList();
    void addPhone();
    Phone* findByName(string name);
    Phone* findByPhone(string phone);
    void updateByName(string name);
    void updateByPhone(string phone);
    void removeByPhone(string phone);
    void removeByName(string name);
    void showAllPhone();
};


#endif //PROJECT1_PHONELIST_H
