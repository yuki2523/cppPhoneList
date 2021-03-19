//
// Created by hcy on 2021/3/16.
//

#ifndef PROJECT1_CONTROLLER_H
#define PROJECT1_CONTROLLER_H

void add(PhoneList* phoneList);
void removeByPhone(PhoneList* phoneList);
void removeByName(PhoneList* phoneList);
void updateByPhone(PhoneList* phoneList);
void updateByName(PhoneList* phoneList);
void searchByPhone(PhoneList* phoneList);
void searchByName(PhoneList* phoneList);
void showAll(PhoneList* phoneList);
void systemExit(PhoneList* phoneList);

#endif //PROJECT1_CONTROLLER_H
