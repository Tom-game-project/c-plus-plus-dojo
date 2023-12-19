#include <iostream>

void fizzbazz(int num){
    if (num%15==0){
        std::cout<<"fizzbazz"<<std::endl;
    }else if (num%3==0){
        std::cout<<"fizz"<<std::endl;
    }else if (num%5==0){
        std::cout<<"bazz"<<std::endl;
    }else{
        std::cout<<num<<std::endl;
    }
}

int main(){
    for (int i=0;i<100;i++){
        fizzbazz(i);
    }
}