//明示的なデータサイズ

// compile
// g++ values_consts\f_02.cpp -o exe_files\f_02.exe

/**
 * @file f_02.cpp
 * @author tom0427 (tom.ipynb@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-09-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */


/*
 * コンパイラによってintの範囲がまちまちなので、
 * 明示的な変数の宣言をすることができる
 * サイズ指定付き整数型を使用する場合は #include <cstdint> と記述する必要があります。
 */


#include <iostream>
#include <cstdint>

using namespace std;



int64_t gcd(int64_t a,int64_t b){
    //64bit整数のgcd
    if (b==0){
        return a;
    }else{
        return gcd(b,a%b);
    }
}

int main(){

    int i = gcd(123456789,987654321);
    cout<<"gcd->"<<i<<endl;
    return 0;
}