//
// Created by hcy on 2021/3/14.
//

#ifndef PROJECT1_STUDENT_H
#define PROJECT1_STUDENT_H
#include <string>

using namespace std;

class Student {
private:
    string _name;
public:
    Student(string name);
    ~Student();
    string getName();
    void setName(string name);
};


#endif //PROJECT1_STUDENT_H
