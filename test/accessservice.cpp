#include "accessservice.h"

class AccessServicePrivate
{
public:
    int c;
};

AccessService::AccessService(QObject *parent) : QObject(parent)
  , d(new AccessServicePrivate)
{

}


AccessService::~AccessService()
{
    delete d;
}

