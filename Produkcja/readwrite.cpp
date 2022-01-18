#include "readwrite.h"

void ReadWrite::Write_liniowa(int a,int b,QString SavePath) {       // liniowa code==1  // code for recognition kind of function in reading.

    QFile RecoveryFile( SavePath );
    RecoveryFile.open( QIODevice::WriteOnly );
       QTextStream out(&RecoveryFile);
            out<<"1\n"; // code for linear function recognition
           out<<QString::number(a)+"\n";    // val of a parameter
            out<<QString::number(b)+"\n";    // val of b parameter
    RecoveryFile.close();
};
void ReadWrite::Write_logarytmiczna(int a,int b,int c,QString SavePath) {            // logarytmiczna code=2

    QFile RecoveryFile( SavePath );
    RecoveryFile.open( QIODevice::WriteOnly );
       QTextStream out(&RecoveryFile);
            out<<"2\n"; // code for logarithmic function recognition
           out<<QString::number(a)+"\n";    // val of a parameter
            out<<QString::number(b)+"\n";    // val of b parameter
            out<<QString::number(c)+"\n";    // val of c parameter
    RecoveryFile.close();
};

void ReadWrite::Write_sinusoidalna(int A,int f,int fi,int b,QString SavePath) {             // sinus code==3
    QFile RecoveryFile( SavePath );
    RecoveryFile.open( QIODevice::WriteOnly );
       QTextStream out(&RecoveryFile);
            out<<"3\n"; // code for sinus function recognition
           out<<QString::number(A)+"\n";    // val of a parameter
            out<<QString::number(f)+"\n";    // val of f parameter
            out<<QString::number(fi)+"\n";    // val of fi parameter
            out<<QString::number(b)+"\n";    // val of b parameter
    RecoveryFile.close();
};

void ReadWrite::Write_pierwiastkowa(int a,int x,int d,QString SavePath) {            // sqrt. code =4
    QFile RecoveryFile( SavePath );
    RecoveryFile.open( QIODevice::WriteOnly );
       QTextStream out(&RecoveryFile);
            out<<"4\n"; // code for sinus function recognition
           out<<QString::number(a)+"\n";    // val of a parameter
            out<<QString::number(x)+"\n";    // val of x parameter
            out<<QString::number(d)+"\n";    // val of d parameter

    RecoveryFile.close();

};
