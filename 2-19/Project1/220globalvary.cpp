#include <iostream>
using namespace std;

int x = 10;

int function1(int a, int b) {

    x  = a + b;
    cout << "被改变的x值为: " << x << endl;
    return 0;
}

int function2() {
    cout << "当前的x值为: " << x << endl;
    return 0;
}

int temp5() {
    function2();
    function1(20, 30);
    function2();
    return 0;


    
}