#ifndef ACCESSSERVICE_H
#define ACCESSSERVICE_H

#include <QObject>

class AccessServicePrivate;

class AccessService : public QObject
{
    Q_OBJECT
private:
    AccessServicePrivate* const d;

public:
    explicit AccessService(QObject *parent = 0);
    ~AccessService();

    void setup(quint16 port);
    void unsetup();


signals:

public slots:
};

#endif // ACCESSSERVICE_H
