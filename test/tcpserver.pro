QT += core
QT -= gui

TARGET = tcpserver
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

include (/home/huangcf/document/frameworks/qtservice/qtservice.pri)
include (/home/huangcf/document/frameworks/logging/logging.pri)

SOURCES += main.cpp \
    accessservice.cpp \
    tcpserverapp.cpp

HEADERS += \
    accessservice.h \
    tcpserverapp.h

