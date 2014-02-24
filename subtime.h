#ifndef SUBTIME_H
#define SUBTIME_H
#include "ctime.h"

class SUBTIME : public CTIME
{
public:
    SUBTIME();
    SUBTIME(int temp_value);
    SUBTIME(CTIME&);
    ~SUBTIME();
    int get_private_time();
    int get_protected_time();
    virtual void getVirtFunc(int a, int b);
    virtual void getVirtFunc(int a, int b, int c);
};

#endif // SUBTIME_H
