#include <iostream>
#include <cmath>
using namespace std;

int temp8()
{
    cout << "����������θ߶�n" << endl;
    int n = 0;
    cin >> n;
    for (int i = 0; i < 2 * n; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            if (abs(i - n) + abs(j - n) == n - 1) //����Ǻ�ʱ����Ĺ���
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