#include <iostream>

using namespace std;

int main(void){
    int number;
    cout << "Enter a number: " << endl;
    cin >> number;

    int factorial = 1;
    for(int i = 1; i <= number; i++){
        factorial = factorial * i;
    }
    cout << "Fucktorial " << number << " = " << factorial << endl;
    return 0;

}