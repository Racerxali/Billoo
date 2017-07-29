#include "Interface.h"



namespace BillooSoft
{


BillooEngine::BillooEngine()
{
}

void BillooEngine::addNewItem(QString name)
{
    ProductItem item;
    item.itemName=name;

    itemList.push_back(item);
}

}
