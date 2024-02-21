#include <iostream>

using namespace std;

int main() {
    short int a1;                              //2
    int a2;                                    //4
    unsigned int a3;                           //4
    long int a4;                               //4
    long long int a5;                          //8
    float a6;                                  //4
    long double a7;                            //16
    double a8;                                 //8
    short a9;                                  //2
    bool a10;                                  //1
    char a11;                                  //1
    wchar_t a12;                               //2
    unsigned short int b1;                     //2
    unsigned int b2;                           //4
    unsigned long int b4;                      //4
    unsigned long long int b5;                 //8
    unsigned short b9;                         //2
    unsigned char b8;                          //1

    cout << typeid(a1).name() << ":" << sizeof(a1) << endl;
    cout << typeid(a2).name() << ":" << sizeof(a2) << endl;
    cout << typeid(a3).name() << ":" << sizeof(a3) << endl;
    cout << typeid(a4).name() << ":" << sizeof(a4) << endl;
    cout << typeid(a5).name() << ":" << sizeof(a5) << endl;
    cout << typeid(a6).name() << ":" << sizeof(a6) << endl;
    cout << typeid(a7).name() << ":" << sizeof(a7) << endl;
    cout << typeid(a8).name() << ":" << sizeof(a8) << endl;
    cout << typeid(a9).name() << ":" << sizeof(a9) << endl;
    cout << typeid(a10).name() << ":" << sizeof(a10) << endl;
    cout << typeid(a11).name() << ":" << sizeof(a11) << endl;
    cout << typeid(a12).name() << ":" << sizeof(a12) << endl;
    cout << typeid(b1).name() << ":" << sizeof(b1) << endl;
    cout << typeid(b2).name() << ":" << sizeof(b2) << endl;
    cout << typeid(b4).name() << ":" << sizeof(b4) << endl;
    cout << typeid(b5).name() << ":" << sizeof(b5) << endl;
    cout << typeid(b9).name() << ":" << sizeof(b9) << endl;
    cout << typeid(b8).name() << ":" << sizeof(b8) << endl;
    return 0;
}
