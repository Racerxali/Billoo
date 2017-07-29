#ifndef BILLOLOGIC_H
#define BILLOLOGIC_H

#include <vector>
#include "productitem.h"
#include "userprofile.h"

namespace BillooSoft
{

class BillooEngine
{

public:
    BillooEngine();

    std::vector<ProductItem>itemList;
    std::vector<UserProfile>userProfileList;

    UserProfile currentProfile ;

    void addNewItem(QString name);
    void addNewProfile();

private:



};
}
#endif // BILLOLOGIC_H
