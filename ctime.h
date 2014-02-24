#ifndef CTIME_H
#define CTIME_H

class CTIME
{
public:
    CTIME();
    CTIME(int);
    CTIME(const CTIME&);
    CTIME& operator=(const CTIME&);
    CTIME operator+(const CTIME&) const;
    virtual int get_time();
    const int test = 10;
    virtual ~CTIME();
    int public_time;
    virtual void getVirtFunc(int a, int b);
    virtual void getVirtFunc(int a, int b, int c);
private:
    int m_time;
    int private_time;
protected:
    int protected_time;

};

#endif // CTIME_H
