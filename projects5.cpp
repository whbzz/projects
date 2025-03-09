#include<iostream>
#define SQUARE(x) ((x)*(x))

int main(void){
    int num = 5;
    int result = SQUARE(num);
    std::cout<<result<<std::endl;
    return 0;
}