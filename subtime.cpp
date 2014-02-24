#include "subtime.h"
#include <QDebug>

SUBTIME::SUBTIME()
{
    qDebug()<<"subtime default contructor was called";
}

SUBTIME::SUBTIME(int temp_value):CTIME(temp_value)
{
    qDebug()<<"subtime contructor was called";
}

SUBTIME::SUBTIME(CTIME & temp_ctime):CTIME(temp_ctime)
{
    qDebug()<<"subtime contructor2 was called";
}

SUBTIME::~SUBTIME()
{
    qDebug()<<"subtime destructor was called";
}

int SUBTIME::get_private_time()
{
    qDebug()<<"SUBTIME::get_time SUBTIME was called";
}

int SUBTIME::get_protected_time()
{
    qDebug()<<"SUBTIME::get_time SUBTIME was called";
    return CTIME::protected_time;
}
void SUBTIME::getVirtFunc(int a, int b)
{
    qDebug()<< a << " + " << b;
}

void SUBTIME::getVirtFunc(int a, int b, int c)
{
    qDebug()<< a << " + " << b << " + " << c;
}
