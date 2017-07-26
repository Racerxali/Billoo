#ifndef BILLOODATA_H
#define BILLOODATA_H

namespace BillooSoft
{

enum class ItemUnit
{
    mtr,//meter
    ltr,//litre
    kg,//Kilogram
    custom//custom default

};

struct ItemPrice
{
    int salePrice=0;
    int purchasePrice=0;

    ItemPrice()=default;

};
}
#endif // BILLOODATA_H
