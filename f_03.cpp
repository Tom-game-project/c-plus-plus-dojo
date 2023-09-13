//ポインタと参照 1
#include <iostream>
using namespace std;

int main(){
    int x;
    x = 5;

    //&をつけるとポインタとなる
    cout <<"x: "<< x << endl;
    cout <<"&x: "<< &x << endl;
    
    //ポインタを格納するための変数
    int *p_x;//慣例としてポインタ変数の宣言と代入部分は分けて書く（一緒に書くと正直名に書いてあるかわかんないから）
    p_x = &x;

    cout << "p_x: " << p_x <<endl;
    cout << "*p_x: " << *p_x <<endl;

    return 0;
}