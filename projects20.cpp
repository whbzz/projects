#include <iostream>

using namespace std;

int main(void){
    int num;
    cout << "enter number: " << endl;
    cin >> num;

    int i = 1;
    do{
        cout << "square " << i <<" = "<< i*i << endl;
        i++;
    }while(i<=num);
    return 0;
}