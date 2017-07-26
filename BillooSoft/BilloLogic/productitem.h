#ifndef PRODUCTITEM_H
#define PRODUCTITEM_H

#include <QString>
#include "billoodata.h"


namespace BillooSoft
{

enum class ItemUnit;
struct ItemPrice;

class ProductItem
{
public:
    ProductItem();

    int itemCode;
    QString itemNam="";       // Products name
    QString itemDescription="";// Products Description
    QString itemHSN_SAC="";    // Products HSN/SAC
    ItemUnit itemUnit=ItemUnit::custom; //TODO add later
    ItemPrice itemPrice; //TODO add later

private:
    static int codeSequence;

};
}
#endif // PRODUCTITEM_H
