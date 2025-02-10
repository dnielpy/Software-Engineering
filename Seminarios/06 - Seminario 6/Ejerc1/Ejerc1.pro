TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    Logica/Logica.c \
    Interfaz/Menus.c \
    Interfaz/Salidas.c

HEADERS += \
    Logica/Logica.h \
    Logica/Datos.h \
    Interfaz/Menus.h \
    Interfaz/Salidas.h

