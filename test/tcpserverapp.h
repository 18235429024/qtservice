#ifndef TCPSERVERAPP_H
#define TCPSERVERAPP_H

#include "qtservice.h"
#include <QCoreApplication>

class TcpServerAppPrivate;

class TcpServerApp : public QtService<QCoreApplication>
{
private:
    TcpServerAppPrivate* const d;

public:
    TcpServerApp(int argc, char** argv);
    ~TcpServerApp();

protected:
    void start() Q_DECL_OVERRIDE;
    void stop() Q_DECL_OVERRIDE;
    void processCommand(int code) Q_DECL_OVERRIDE;
};

#endif // TCPSERVERAPP_H
