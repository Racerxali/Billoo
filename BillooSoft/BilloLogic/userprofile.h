#ifndef USERPROFILE_H
#define USERPROFILE_H

#include <QString>

namespace BillooSoft
{
class UserProfile
{
public:
    UserProfile();

private:

    //---Login details
    /*none for now*/
    //----------------

    QString profileName;//mandatory
    QString firmName;//mandatory
    QString addressLine1;//optional
    QString addressLine2;//optional
    QString city;//optional
    QString state;//optional
    int PIN;//optional
    int phoneNumber;//optional
    QString GSTINnumber;//optional
    QString header;//optional example "www.kudaKabada.com"
    QString footer;//optional example "Thank You! Visit Again!"
};
}
#endif // USERPROFILE_H
