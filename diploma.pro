QT       +=  core gui sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    authorization.cpp \
    authorizteacher.cpp \
    changeinfo.cpp \
    dpa.cpp \
    g1_l1.cpp \
    g1_l2.cpp \
    g2_l1.cpp \
    g3_l1.cpp \
    gradeerror.cpp \
    home.cpp \
    levels.cpp \
    main.cpp \
    mainwindow.cpp \
    registration.cpp \
    regteacher.cpp \
    result.cpp \
    statistic.cpp \
    teacherspage.cpp

HEADERS += \
    authorization.h \
    authorizteacher.h \
    changeinfo.h \
    dpa.h \
    g1_l1.h \
    g1_l2.h \
    g2_l1.h \
    g3_l1.h \
    gradeerror.h \
    home.h \
    levels.h \
    mainwindow.h \
    registration.h \
    regteacher.h \
    result.h \
    statistic.h \
    teacherspage.h

FORMS += \
    authorization.ui \
    authorizteacher.ui \
    changeinfo.ui \
    dpa.ui \
    g1_l1.ui \
    g1_l2.ui \
    g2_l1.ui \
    g3_l1.ui \
    gradeerror.ui \
    home.ui \
    levels.ui \
    mainwindow.ui \
    registration.ui \
    regteacher.ui \
    result.ui \
    statistic.ui \
    teacherspage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

win32: RC_ICONS = $$PWD/img/mainYellowLogo.ico



