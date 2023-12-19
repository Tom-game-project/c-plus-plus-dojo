#include <stdio.h>
#include <stdbool.h>


/**
 * # isPrime
 * 
 * 与えられた引数が素数かどうか調べる
 * 素数を求める方法としては効率の悪い方法です.
 * 
 * @brief 
 * 
 * @param num 
 * @return true 
 * @return false 
 */
bool isPrime(int num){
    for (int i=2;i<num;i++){
        if (num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    for (int i=2;i<100;i++){
        if (isPrime(i)){
            printf("%d\n",i);
        }
    }
    return 0;
}