#include <iostream>
using namespace std;

/*int main() {
    enum days { one, two, three }day;
    day = one;
    switch (day) {
    case one:
        cout << "one" << endl;
        break;
    case two:
        cout << "two" << endl;
        break;
    default:
        cout << "three" << endl;
        break;
    }
    return 0;
}*/

enum time
{
    first, second,
    third, forth, fifth
};


int temp2()
{

    enum time a = fifth;
    if (a == fifth)
    {
        cout << "Succeed!";
    }
    return 0;
}