#include "productitem.h"


namespace BillooSoft
{

int ProductItem::codeSequence=0;
ProductItem::ProductItem():itemCode(codeSequence+1)
{

}
}
