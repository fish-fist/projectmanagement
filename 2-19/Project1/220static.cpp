#include <iostream>
using namespace std;


int count = 1; //ȫ�ֱ���

int fun()
{
    static int count = 10; // �ڵ�һ�ν������������ʱ�򣬱��� count ����ʼ��Ϊ 10���������Լ� 1���Ժ�ÿ�ν���ú�����count ��ֵ����һ�κ�������֮���ֵ
    return count--;        // �Ͳ��ᱻ�ٴγ�ʼ���ˣ��������Լ� 1 �Ĳ������� static ����ǰ��Ҫ�ﵽͬ���Ĺ��ܣ���ֻ��ʹ��ȫ�ֱ���
}

//int count = 1; //ȫ�ֱ���

/*int main()
{
    cout << "global  " << "local staic" << endl;
    for (; ::count <= 10; ++::count)
        cout << ::count << "        " << fun() << endl;
    return 0;
}*/


/*int a = 10;
int main()
{
    int a = 20;
    cout << ::a << endl;   // 10
    cout << a << endl;     // 20
    return 0;
}*/


int s32Test;   // ����ȫ�ֱ�����ϵͳĬ�ϳ�ʼ��0

static void Fun();  // ����ֻ�޶��ڱ���ǰ�ļ����õĺ���


static void Fun()
{
    int s32Test = 1;  // �ֲ�����,�������ʼ��������һ�������ֵ

    //��ȫ�ֱ�������ͬ��������ȫ�ֱ�������,s32Test = 1
    printf("This is Fun()��s32Test = %d!", s32Test);
}

int temp6()
{
    Fun();
    return 0;
}