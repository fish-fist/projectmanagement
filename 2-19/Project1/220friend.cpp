#include <iostream>

using namespace std;

class Box
{
    double width;
public:
    friend void printWidth(Box box);
    void setWidth(double wid);
};

// ��Ա��������
void Box::setWidth(double wid)
{
    width = wid;
}

// ��ע�⣺printWidth() �����κ���ĳ�Ա����
void printWidth(Box box)
{
    /* ��Ϊ printWidth() �� Box ����Ԫ��������ֱ�ӷ��ʸ�����κγ�Ա */
    cout << "Width of box : " << box.width << endl;
}

// �����������
int temp11()
{
    Box box1;


    // ʹ�ó�Ա�������ÿ��
    box1.setWidth(5.0);

    // ʹ����Ԫ����������
    printWidth(box1);

    return 0;
}