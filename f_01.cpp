//定数、変数

/**
 * @file f_01.cpp
 * @author tom0427 (tom.ipynb@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-09-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>


int main(){
    
    //実行時に定数として設定される
    const int c = 2;
    //コンパイル時に定数として設定される
    constexpr float pi = 3.14;
    
    //
    std::cout << c << std::endl;
    std::cout << pi << std::endl;

    int i;
    i=0;
    i++;
    std::cout << i << std::endl;
}