#include <iostream>
#include "cmplx.h"
using namespace std;

int& fun(int& r){
    r*=2;
    return r;
}

int& maks(int& x, int& y){
    return x>y ? x : y;
}

int k=3;

int& ref(){
    return k;
}


int main() {
//    int x(2);
////    cout << x << endl;
////    double t[10]{2.5, 4};
////    for (double el: t) cout << el << " ";
//
////    double *p1 = NULL, *p2 = nullptr;
////    if(p1 == p2) cout << "t1==t2" << endl;
//
//
////    int k = 0;
////    const int &r = k;
////    cout << "r=" << r << endl;
////    k++;
////    cout << "k=" << k << " r=" << r << endl;
////    cout << endl;
//
////    int a = 2;
////    cout << a << endl;
////    cout << fun(a) << endl;
////    cout << a << endl;
////
////    fun(a) = 10; // bo zwraca referencje
////    cout << a << endl;
//
////    int x = 2, y = 5;
////    maks(x,y) = 0; // zwraca referencje
////    cout << "x=" << x << endl;
////    cout << "y=" << y << endl;
////
//
////    cout << "k=" << ref() << endl;
////
////    ref() = 5; // zwraca referencje!
////
////    cout << "k=" << ref() << endl;

    CMPLX a=7.5;

    a.Read();


    return 0;
};