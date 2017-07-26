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


private:



};
}
#endif // BILLOLOGIC_H
