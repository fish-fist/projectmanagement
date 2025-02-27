#include <iostream>
#include <cmath>
using namespace std;

int temp8()
{
    cout << "请输入半菱形高度n" << endl;
    int n = 0;
    cin >> n;
    for (int i = 0; i < 2 * n; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            if (abs(i - n) + abs(j - n) == n - 1) //输出星号时满足的规律
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}