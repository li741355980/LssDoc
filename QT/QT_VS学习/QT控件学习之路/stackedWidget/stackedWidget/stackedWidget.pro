QT+=widgets

TARGET=stackedWidget
TEMPLATE=app

HEADERS += \
    dialog.h \
    window1.h \
    window3.h \
    window2.h

SOURCES += \
    dialog.cpp \
    main.cpp \
    window2.cpp \
    window3.cpp \
    window1.cpp

FORMS += \
    window1.ui \
    window2.ui \
    window3.ui \
    stack.ui
