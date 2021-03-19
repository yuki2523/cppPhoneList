//
// Created by hcy on 2021/3/15.
//

#include <iostream>
#include <string>
#include "PhoneList.h"
#include "Phone.h"

using namespace std;

PhoneList::PhoneList() {
    this->first_phone = nullptr;
    this->length = 0;
}

PhoneList::~PhoneList() {
    cout << "电话簿已释放" << endl;
}

void PhoneList::addPhone() {
    string phone, name;
    int age, gender;
    cout << "请输入phone：";
    cin >> phone;
    cout << "请输入name：";
    cin >> name;
    cout << "请输入age：";
    cin >> age;
    cout << "请输入gender：(1 male, 2 female, 0 secret)";
    cin >> gender;
    Phone* newPhone = new Phone(phone, name, gender, age);
    newPhone->setNextPhone(this->first_phone);
    this->first_phone = newPhone;
    this->length++;
    cout << name << phone << "已添加" << endl;
}

Phone *PhoneList::findByName(string name) {
    for (Phone *p = this->first_phone; p; p = p->next_phone) {
        if (p->getName() == name) {
            return p;
        }
    }
    return nullptr;
}

Phone *PhoneList::findByPhone(string phone) {
    for (Phone *p = this->first_phone; p; p = p->next_phone) {
        if (p->getPhone() == phone) {
            return p;
        }
    }
    return nullptr;
}

void PhoneList::updateByName(string name) {
    Phone* p = this->findByName(name);
    if (!p) {
        cout << name << "不存在" << endl;
    }
    string newPhone, newName;
    int newAge, newGender;
    cout << "请输入new phone：";
    cin >> newPhone;
    cout << "请输入new name：";
    cin >> newName;
    cout << "请输入new age：";
    cin >> newAge;
    cout << "请输入new gender：(1 male, 2 female, 0 secret)";
    cin >> newGender;
    p->setPhone(newPhone);
    p->setName(newName);
    p->setAge(newAge);
    p->setGender(newGender);
}

void PhoneList::updateByPhone(string phone) {
    Phone* p = this->findByPhone(phone);
    if (!p) {
        cout << phone << "不存在" << endl;
    }
    string newPhone, newName;
    int newAge, newGender;
    cout << "请输入new phone：";
    cin >> newPhone;
    cout << "请输入new name：";
    cin >> newName;
    cout << "请输入new age：";
    cin >> newAge;
    cout << "请输入new gender：(1 male, 2 female, 0 secret)";
    cin >> newGender;
    p->setPhone(newPhone);
    p->setName(newName);
    p->setAge(newAge);
    p->setGender(newGender);
}

void PhoneList::removeByPhone(string phone) {
    if (!this->first_phone) { // 没有用户的情况
        cout << "未匹配到phone为" << phone << "的用户" << endl;
        return;
    }
    // 第一个就匹配到了
    if (this->first_phone && this->first_phone->getPhone() == phone) {
        string name = this->first_phone->getName();
        if (!this->first_phone->next_phone) { // 只有一个元素
            delete this->first_phone;
            this->first_phone = nullptr;
        } else { // 除了第一个后面还有
            Phone* firstPhone = this->first_phone;
            this->first_phone = firstPhone->getNextPhone();
            delete firstPhone;
        }
        this->length--;
        cout << name << phone << "已删除" << endl;
        return;
    }
    // 只有一个而且还不能匹配到
    if (!this->first_phone->next_phone && (this->first_phone->getPhone() != phone)) {
        cout << "未匹配到phone为" << phone << "的用户" << endl;
        return;
    }
    // 这个循环从第二个开始考虑
    for (Phone *p = this->first_phone; p; p = p->next_phone) {
        if (p->next_phone->getPhone() == phone) {
            Phone* p1 = p->next_phone;
            p->next_phone = p->next_phone->next_phone;
            cout << p1->getName() << phone << "已删除" << endl;
            this->length--;
            delete p1;
            return;
        }
    }
    cout << "未匹配到phone为" << phone << "的用户" << endl;
}

void PhoneList::removeByName(string name) {
    if (!this->first_phone) {
        cout << "未匹配到name为" << name << "的用户" << endl;
        return;
    }
    if (this->first_phone && this->first_phone->getName() == name) {
        string phone = this->first_phone->getPhone();
        if (!this->first_phone->next_phone) { // 只有一个元素
            delete this->first_phone;
            this->first_phone = nullptr;
        } else { // 除了第一个后面还有
            Phone* firstPhone = this->first_phone;
            this->first_phone = firstPhone->getNextPhone();
            delete firstPhone;
        }
        this->length--;
        return;
    }
    // 只有一个而且还不能匹配到
    if (!this->first_phone->next_phone && (this->first_phone->getPhone() != name)) {
        cout << "未匹配到name为" << name << "的用户" << endl;
        return;
    }
    for (Phone *p = this->first_phone; p; p = p->next_phone) {
        if (p->next_phone->getName() == name) {
            Phone* p1 = p->next_phone;
            p->next_phone = p->next_phone->next_phone;
            cout << name << p1->getPhone() << "已删除" << endl;
            this->length--;
            delete p1;
            return;
        }
    }
    cout << "未匹配到name为" << name << "的用户" << endl;
}

void PhoneList::showAllPhone() {
    if (!this->first_phone) {
        cout << "当前电话簿为空" << endl;
        return;
    }
    cout << "当前电话簿总记录条数为：" << this->length << endl;
    cout << "序号\t"
         << "姓名\t"
         << "电话\t"
         << "年龄\t"
         << "性别\t" << endl;
    int index = 0;
    for (Phone *p = this->first_phone; p; p = p->next_phone) {
        index++;
        cout << index << "\t";
        Phone::phoneInfo(p);
    }
}