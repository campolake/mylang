TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    Scanner.cpp \
    Interpreter.cpp \
    Parser.cpp \
    Main.cpp \
    Tokeninfo.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    Scanner.h \
    Interpreter.h \
    Parser.h \
    Tokeninfo.h \
    ExprAst.h

