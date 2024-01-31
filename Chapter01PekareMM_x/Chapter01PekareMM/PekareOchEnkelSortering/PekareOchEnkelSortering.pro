QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


#../../Facit/facit01PekareMM\
#../../Facit/facit01PekareMM/student2reference.cpp \
#../../Facit/facit01PekareMM/student3swaps.cpp \
#../../Facit/facit01PekareMM/student4thoughtreading.cpp \
#../../Facit/facit01PekareMM/student5Sortings.cpp \
#../../Facit/facit01PekareMM/student6tidtagningsexperiment.cpp \


SOURCES += main.cpp \
    stuff.cpp \
    student1.cpp \
    student2reference.cpp \
    student3swaps.cpp \
    student4thoughtreading.cpp \
    student5Sortings.cpp \
    student6tidtagningsexperiment.cpp \
    ragnarstest1.cpp \
    ragnarstest2.cpp \
    ragnarstest3.cpp \
    ragnarstest4.cpp \
    ragnarstest5.cpp \
    dalgorandom.cpp

HEADERS += \
    stuff.h \
    student1.h \
    ragnarstest1.h \
    ragnarstest5.h \
    student5Sortings.h \
    student2reference.h \
    student3swaps.h \
    student4thoughtreading.h \
    ragnarstest2.h \
    ragnarstest3.h \
    ragnarstest4.h \
    student6tidtagningsexperiment.h \
    dalgorandom.h

DISTFILES +=
