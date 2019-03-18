QT       += core gui sql


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = st5
TEMPLATE = app


SOURCES += \
    boardbutton.cpp \
    main.cpp \
    mainpanel.cpp \
    setalarm.cpp \
    setntp.cpp \
    setptp.cpp \
    settime.cpp \
    setgnss.cpp \
    setpower.cpp \
    setb.cpp \
    set10m.cpp \
    setext.cpp \
    setsw.cpp \
    setalloc.cpp\
    showlog.cpp \
    logmod.cpp \
    settf.cpp \
    setsys.cpp


HEADERS += \
    boardbutton.h \
    mainpanel.h \
    setalarm.h \
    setntp.h \
    setptp.h \
    settime.h \
    setgnss.h \
    setpower.h \
    setb.h \
    set10m.h \
    setext.h \
    setsw.h \
    setalloc.h \
    config.h \
    showlog.h \
    logmod.h \
    settf.h \
    setsys.h

FORMS += \
    boardbutton.ui \
    mainpanel.ui \
    setalarm.ui \
    setntp.ui \
    setptp.ui \
    settime.ui \
    setgnss.ui \
    setpower.ui \
    setb.ui \
    set10m.ui \
    setext.ui \
    setsw.ui \
    setalloc.ui \
    showlog.ui \
    settf.ui \
    setsys.ui

RESOURCES += \
    res.qrc

