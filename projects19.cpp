#include <iostream>

using namespace std;

int main(void){
    int i = 1;
    while(i<=100){
        if (i%3==0){
            cout <<i<< endl;
        }
        i++;
    }
    return 0;
}