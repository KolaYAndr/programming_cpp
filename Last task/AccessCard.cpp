#include "AccessCard.h"

//функция получения доступа по карте
bool AccessCard::get_access(int requirement) const {
    if (accessLevel >= requirement) return true;
    else return false;
}
