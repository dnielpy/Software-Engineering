TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    Interfaz/interfaz.c \
    Logica/logica.c

HEADERS += \
    Interfaz/interfaz.h \
    Logica/logica.h

