// ポインタと参照 2
//関数もポインタを持つ

#include <iostream>
using namespace std;

int add (int a,int b){
    return a+b;
}
int sub (int a,int b){
    return a-b;
}

int main(){
    int (*func_ptr)(int,int);
    int r;
    
    func_ptr = &add;
    cout <<"func ptr: "<< func_ptr << endl;
    r = func_ptr(3,4);
    cout << "return: " << r << endl;

    func_ptr = &sub;
    cout << "func ptr: " << func_ptr << endl;
    r = func_ptr(3, 4);
    cout << "return: " << r << endl;
}