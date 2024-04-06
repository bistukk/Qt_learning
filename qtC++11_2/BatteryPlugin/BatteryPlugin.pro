CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(tbatteryplugin)
TEMPLATE    = lib

HEADERS     = tbatteryplugin.h
SOURCES     = tbatteryplugin.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

QT += designer

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(tbattery.pri)
