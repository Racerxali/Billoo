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
    QString ItemDescription;// Products Description
    QString itemHSN_SAC;    // Products HSN/SAC
    //unit //TODO add later
    //Price //TODO add later

};
}
#endif // PRODUCTITEM_H
