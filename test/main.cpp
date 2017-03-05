#include "tcpserverapp.h"

int main(int argc, char *argv[])
{
    TcpServerApp a(argc, argv);

    return a.exec();
}

