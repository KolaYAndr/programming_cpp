#include "AccessCard.h"

//������� ��������� ������� �� �����
bool AccessCard::get_access(int requirement) const {
    if (accessLevel >= requirement) return true;
    else return false;
}
