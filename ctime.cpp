#include "ctime.h"
#include <QDebug>

CTIME::CTIME():m_time(0)
{
    qDebug()<<"default contructor was called";
}

CTIME::CTIME(int temp_time = 1):m_time(temp_time)
{
    qDebug()<<"contructor was called";
}

CTIME::CTIME(const CTIME & temp_ctime)
{
    qDebug()<<"copy contructor was called";
    CTIME::m_time = temp_ctime.m_time;
}

CTIME& CTIME::operator=(const CTIME &temp_time)
{
    qDebug()<<"= operator was called";
    CTIME::m_time = temp_time.m_time + 10;
    return *this;
}

CTIME CTIME::operator+(const CTIME & temp_time) const
{
    return CTIME(CTIME::m_time + temp_time.m_time);
}

int CTIME::get_time()
{
    qDebug()<<"CTIME::get_time was called";
}

CTIME::~CTIME()
{
    qDebug()<<"CTIME destructor was called";
}

void CTIME::getVirtFunc(int a, int b)
{
    qDebug()<< a << " " << b;
}

void CTIME::getVirtFunc(int a, int b, int c)
{
    qDebug()<< a << " " << b << " " << c;
}



