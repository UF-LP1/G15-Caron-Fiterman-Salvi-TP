QT = core

CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
       Banyo.cpp \
       Bazar.cpp \
       Cerrajero.cpp \
       Cliente.cpp \
       Despachante.cpp \
       Duenyo.cpp \
       Electricidad.cpp \
       Ferreteria.cpp \
       Herramientas_Alquiler.cpp \
       Llaves.cpp \
       Mercaderia.cpp \
       Persona.cpp \
       Plomero.cpp \
       Rubro.cpp \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
   Banyo.h \
   Bazar.h \
   Cerrajero.h \
   Cliente.h \
   Despachante.h \
   Duenyo.h \
   Electricidad.h \
   Ferreteria.h \
   Herramientas_Alquiler.h \
   Llaves.h \
   Mercaderia.h \
   Persona.h \
   Plomero.h \
   Rubro.h
