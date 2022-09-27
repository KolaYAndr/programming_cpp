#pragma once
#include <string>
#include <iostream>

using namespace std;

//��������� �����
class AccessCard {
public:
    //�����������, ������� � ����������� �� ���� ����� ����� �������� �������
    AccessCard(string type) : type(type) {
        if (type == "Student") accessLevel = 1;
        if (type == "Teacher") accessLevel = 2;
        if (type == "Developer") accessLevel = 3;
    }

    //�������� �������
    bool get_access(int) const;

    //�������� ����
private:
    int accessLevel;
    string type;
};
