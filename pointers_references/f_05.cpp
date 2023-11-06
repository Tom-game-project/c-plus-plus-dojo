#include <iostream>
using namespace std;

void say_hello(){
    cout<<"hello"<<endl;
}


int main(){
    void (*func)();

    func = &say_hello;

    cout << &func << endl;

    say_hello();
    for (int i=0;i<10;i++){
        func();
    }
    return 0;
}