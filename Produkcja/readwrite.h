#ifndef READWRITE_H
#define READWRITE_H
#include "QDebug"
#include <qfile.h>

class ReadWrite
{
public:
    ReadWrite();

//    int get_a_param() {
//        return a_param.toInt();
//    }
//    int get_b_param() {
//        return b_param.toInt();
//    }
//    int get_c_param() {
//        return c_param.toInt();

//    }
//    int get_d_param() {
//        return d_param.toInt();

//    }
//    int get_e_param() {
//        return e_param.toInt();
//    }

private:

//QString a_param;  // type of function indicator
//QString b_param;
//QString c_param;
//QString d_param;
//QString e_param;

public:

    void Write_liniowa(int a,int b,QString SavePath);       // liniowa code==1  // code for recognition kind of function in reading.


    void Write_logarytmiczna(int a,int b,int c,QString SavePath);             // logarytmiczna code=2


    void Write_sinusoidalna(int A,int f,int fi,int b,QString SavePath);              // sinus code==3


    void Write_pierwiastkowa(int a,int x,int d,QString SavePath);            // sqrt. code =4


};

#endif // READWRITE_H
