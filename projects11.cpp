#include <iostream>
using namespace std;

int main(void){
    int num;

    do{
        cout<<"Please enter a number(0 - exit): "<<endl;
        cin>>num;

        if (!cin) {
            cout << "Error: Incorrect data entered. Program terminated." << endl;
            return 1;
        }

        if (num!=0) {
            cout << "Number square: " << num << " = " << num*num << endl;
        }
    } while(num!=0);
    
    return 0;
}