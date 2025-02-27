#include <iostream>
using namespace std;


int count = 1; //全局变量

int fun()
{
    static int count = 10; // 在第一次进入这个函数的时候，变量 count 被初始化为 10！并接着自减 1，以后每次进入该函数，count 的值是上一次函数运行之后的值
    return count--;        // 就不会被再次初始化了，仅进行自减 1 的操作；在 static 发明前，要达到同样的功能，则只能使用全局变量
}

//int count = 1; //全局变量

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


int s32Test;   // 定义全局变量，系统默认初始化0

static void Fun();  // 声明只限定在被当前文件调用的函数


static void Fun()
{
    int s32Test = 1;  // 局部变量,如果不初始化，会是一个随机数值

    //与全局变量名相同，会屏蔽全局变量调用,s32Test = 1
    printf("This is Fun()，s32Test = %d!", s32Test);
}

int temp6()
{
    Fun();
    return 0;
}