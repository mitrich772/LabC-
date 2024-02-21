#include <iostream>
using namespace std;
int main() {
<<<<<<< HEAD
    cout << "Hello, World!" << endl;
=======
    int integer;
    unsigned int un_integer;
    long long_integer;
    double integer_with_dot;
    short short_integer;
    string output = to_string(sizeof(integer)) + " " + to_string(sizeof(un_integer)) + " " + to_string(sizeof(long_integer)) + " "+ to_string(sizeof(integer_with_dot)) + " "+ to_string(sizeof(short_integer)) + " ";
    cout << output << endl;
>>>>>>> 75f03eb (initial)
    return 0;
}
