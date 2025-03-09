#include <iostream>

using namespace std;

int main(void){
    
    int num;
    cout << "Enter number: " << endl;
    cin >> num;
    
    if (num%2==0){
        cout << "Even number" << endl;
    }
    else{
        cout << "The number is not even" << endl;
    }

    return 0;

}