#include <iostream>
#include "Phone.h"
#include "PhoneList.h"
#include "controller.h"

using namespace std;

int main() {
    PhoneList *phoneList = new PhoneList();
    bool doing = true;
    while (doing) {
        system("clear");
        cout << "欢迎进入电话簿" << "\n"
             << "1、添加记录" << "\n"
             << "2、通过name删除" << "\n"
             << "3、通过phone删除" << "\n"
             << "4、通过name修改" << "\n"
             << "5、通过phone修改" << "\n"
             << "6、通过name查找" << "\n"
             << "7、通过phone查找" << "\n"
             << "8、展示电话簿中全部" << "\n"
             << "0、退出" << endl;
        int flag;
        cin >> flag;
        switch (flag) {
            case 1:
                system("clear");
                add(phoneList);
                break;
            case 2:
                system("clear");
                removeByName(phoneList);
                break;
            case 3:
                system("clear");
                removeByPhone(phoneList);
                break;
            case 4:
                system("clear");
                updateByName(phoneList);
                break;
            case 5:
                system("clear");
                updateByPhone(phoneList);
                break;
            case 6:
                system("clear");
                searchByName(phoneList);
                break;
            case 7:
                system("clear");
                searchByPhone(phoneList);
                break;
            case 8:
                system("clear");
                showAll(phoneList);
                break;
            case 0:
                system("clear");
                systemExit(phoneList);
                phoneList = nullptr;
                doing = false;
                break;
            default:
                cout << "请选择正确的选项" << endl;
        }
    }
    return 0;
}
