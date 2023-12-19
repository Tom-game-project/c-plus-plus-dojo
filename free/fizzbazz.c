#include <stdio.h>

void fizzbazz(int num){
    if (num%15==0){
        printf("fizzbazz\n");
    }else if (num%3==0){
        printf("fizz\n");
    }else if (num%5==0){
        printf("bazz\n");
    }else{
        printf("%d\n",num);
    }
}

int main(){
    for (int i=0; i<100 ;i++){
        fizzbazz(i);
    }
}