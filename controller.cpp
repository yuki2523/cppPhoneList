//
// Created by hcy on 2021/3/16.
//

#include <iostream>
#include <string>
#include "Phone.h"
#include "PhoneList.h"
#include "controller.h"

using namespace std;

void add(PhoneList* phoneList) {
    phoneList->addPhone();
}

void removeByPhone(PhoneList* phoneList) {
    string phone;
    cout << "请输入phone：";
    cin >> phone;
    phoneList->removeByPhone(phone);
};

void removeByName(PhoneList* phoneList) {
    string name;
    cout << "请输入name：";
    cin >> name;
    phoneList->removeByName(name);
};

void updateByPhone(PhoneList* phoneList) {
    string phone;
    cout << "请输入phone：";
    cin >> phone;
    phoneList->updateByPhone(phone);
};

void updateByName(PhoneList* phoneList) {
    string name;
    cout << "请输入name：";
    cin >> name;
    phoneList->updateByName(name);
};

void searchByPhone(PhoneList* phoneList) {
    string phone;
    cout << "请输入phone：";
    cin >> phone;
    Phone::phoneInfo(phoneList->findByPhone(phone));
};

void searchByName(PhoneList* phoneList) {
    string name;
    cout << "请输入name：";
    cin >> name;
    Phone::phoneInfo(phoneList->findByName(name));
};

void showAll(PhoneList* phoneList) {
    phoneList->showAllPhone();
    cout << "按任意键进入再次命令循环" << endl;
    cin.get();
    getchar();
}

void systemExit(PhoneList* phoneList) {
    delete phoneList;
};