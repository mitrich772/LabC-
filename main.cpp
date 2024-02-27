#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main() {

    short int a1;                              //2
    int a2;                                    //4 int и unsigned int одинаковы по размеру тк просто по разному используеться выделенная им память
    unsigned int a3;                           //4
    long int a4;                               //4
    long long int a5;                          //8
    float a6;                                  //4
    long double a7;                            //16 long double — это тип с плавающей запятой, размер которого больше или равен размеру типа double. Количество знаков мантиссы:19
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
    unsigned char b8;                          //1 char	-128...127  unsigned char 0... 255

    cout << "Task 1" << endl;
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

    //Задание 2

    float all_f[6]{-1.1, -1.5, -1.9, 1.1, 1.5, 1.9};
    cout << "Task 2"<< endl;
    cout << "float to int" << endl;
    for (int i = 0; i < size(all_f); i++) {
        int f = all_f[i];
        int rf = (int) all_f[i];
        cout << f << "<-imp|evid->" << rf << endl; // отрезает после точки
    }
    double all_d[6]{-1.1, -1.5, -1.9, 1.1, 1.5, 1.9}; // -1,-1,-1,1,1,1
    cout << "double to int" << endl;
    for (int i = 0; i < size(all_d); i++) {
        int f = all_d[i];
        int rf = (int) all_d[i];
        cout << f << "<-imp|evid->" << rf << endl; // отрезает после точки
    }
    int y = true; // 1
    int x = false; // 0
    int yo = (bool) true; // 1
    int xo = (bool) false; // 0
    bool z = 5; // 1
    bool p = 0; // 0
    bool zo = (bool) 5; // 1
    bool po = (bool) 0; // 0
    cout << "true -> (int) true -> int = " << y << "<-imp|evid->" << yo << endl;
    cout << "false -> (int) false -> int = " << x << "<-imp|evid->" << xo << endl;
    cout << "5 -> (bool) 5 -> bool  = " << z << "<-imp|evid->" << zo << endl;
    cout << "0 -> (bool) 0 -> bool  = " << p << "<-imp|evid->" << po << endl;

    //3 задание

    unsigned char ucс = 250; // 255
    char cc = 127; // –128 до 127.
    short int k = pow(2, 15); // +- 2**15
    unsigned short int uk = pow(2, 16); //2**16
    long int l = pow(2, 32); //2**32
    ucс += 10;
    cc += 1;
    k += 1;
    uk += 1;
    l += 1;
    cout << "Task 3" << endl;

    cout << "unsigned char :" << ucс << endl;
    cout << "short int :" << k << endl;
    cout << "unsigned short int :" << uk << endl;
    cout << "long int :" << l << endl;
    cout << "char :" << cc << ")"<< endl;

    // 2 часть

    unsigned char uc_2 = 250; // a)
    uc_2 += 10;
    cout << "a)" << uc_2 << endl;

    char c_2 = 100; // б)
    c_2 += 30;
    cout << "b)" << c_2 << endl;

    short sh = pow(2, 15) - 4;
    sh += 40;
    cout << "c)" << sh << endl;

    int it = pow(2, 31) - 5;
    it += 123;
    cout << "d)" << it << endl;



// 4 задание
    cout << "Task 4" << endl;
    unsigned char uc;
    char c;
    uc = 150; // uc = 150
    c = uc; // c = 150
    cout << c << endl;
    unsigned char uc1;
    char c1;
    c1 = -128; // c1 = -1 там символ пробела
    uc1 = c1; // uc1 - макс тк -1 -> 255 -2 ->254 и тд
    cout << "signed :" << (int) c1 << " | unsigned :" << (int) uc1 << endl;
    // Определяем максимальное значение unsigned long int
    unsigned long int ling = -1; // б)
    cout << "max of unsigned long int :" << ling << endl;

    cout << "Task 5" << endl;
    unsigned  long int ui;
    long int i;
    float f;
     i = -1;
     ui = i; // макс long int
     cout << ui <<endl;
     f = ui;
     cout << f << endl;
     f += 1; //8000
     cout << f << endl;

     unsigned long int lli = -1;
     double df = lli;

     return 0;
}
