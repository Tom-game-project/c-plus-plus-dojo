// ポインタと参照 2
// 関数もポインタを持つ

// compile
// g++ f_05.cpp -o f_05.exe

#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}

int main()
{
    int (*func_ptr0)(int, int);
    int (*func_ptr1)(int, int);
    int r;
    func_ptr0 = &add;
    func_ptr1 = &sub;
    cout << "func ptr: " << func_ptr0 << endl;
    r = func_ptr0(3, 4);
    cout << "return: " << r << endl;

    cout << "func ptr: " << func_ptr1 << endl;
    r = func_ptr1(3, 4);
    cout << "return: " << r << endl;
}