#ifndef PRODUCTITEM_H
#define PRODUCTITEM_H

#include <QString>


namespace BillooSoft
{
class ProductItem
{
public:
    ProductItem();

    int itemCode;
    QString itemName;       // Products name
    QString itemDescription;// Products Description
    QString itemHSN_SAC;    // Products HSN/SAC
    QString itemUnit; //TODO add later
    QString itemPrice; //TODO add later

};
}
#endif // PRODUCTITEM_H
