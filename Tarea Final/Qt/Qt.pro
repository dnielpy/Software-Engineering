TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    Interfaz/Interfaz.c \
    Logica/Logica.c \
    Interfaz/Menu.c

HEADERS += \
    Interfaz/Interfaz.h \
    Logica/Logica.h \
    Logica/Datos.h

OTHER_FILES +=

