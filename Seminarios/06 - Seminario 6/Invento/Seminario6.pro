TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    Logica/Logica.c \
    Interfaz/Menus.c \
    Interfaz/Salidas.c

HEADERS += \
    Interfaz/Menus.h \
    Logica/Datos.h \
    Logica/Logica.h \
    Interfaz/Salidas.h

