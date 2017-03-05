#include "tcpserverapp.h"
#include "filelogger.h"

class TcpServerAppPrivate
{
public:
    FileLogger* file_logger;
};

TcpServerApp::TcpServerApp(int argc, char** argv)
    : QtService<QCoreApplication>(argc, argv, "TcpService")
    , d(new TcpServerAppPrivate)
{
    d->file_logger = 0;
    setServiceDescription("descr...");
    setStartupType(QtServiceController::AutoStartup);
}


TcpServerApp::~TcpServerApp()
{
    delete d;
}


void TcpServerApp::start()
{
    // start qlogger framework
    QSettings* log_settings = new QSettings(
                "qlogger.ini",
                QSettings::IniFormat,
                application());
    d->file_logger = new FileLogger(log_settings);
    d->file_logger->installMsgHandler();

    qDebug("server start");

}


void TcpServerApp::stop()
{
    qDebug("server stop");

    // stop qlogger framework
    delete d->file_logger;
    d->file_logger = 0;
}


void TcpServerApp::processCommand(int code)
{
    qDebug("server command %d", code);
    if (code == 101) {
        qInfo("logger info test");
    }
    if (code == 102) {
        qWarning("logger warning test");
    }
    if (code == 103) {
        qCritical("logger error test");
    }
    if (code == 104) {
        qFatal("logger fatal test");
    }
}

