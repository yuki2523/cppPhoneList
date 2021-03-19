//
// Created by hcy on 2021/3/15.
//

#ifndef PROJECT1_PHONE_H
#define PROJECT1_PHONE_H
#include <string>

using namespace std;

class Phone {
private:
    string _phone;
    string _name;
    int _gender; // 0 secret 1 male 2 female
    int _age;
public:
    Phone* next_phone;
    Phone();
    Phone(string phone, string name, int gender, int age);
    ~Phone();
    void setPhone(string phone);
    void setName(string name);
    void setGender(int gender);
    void setAge(int age);
    void setNextPhone(Phone* next_phone);
    string getPhone();
    string getName();
    int getGender();
    int getAge();
    Phone* getNextPhone();
    static void phoneInfo(Phone* phone);
};


#endif //PROJECT1_PHONE_H
