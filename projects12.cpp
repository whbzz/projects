#include <iostream>
using namespace std;

int main(void){
    
    double num1, num2;

    cout << "Enter the first number: " << endl;
    cin >> num1;

    cout << "Enter the second number: " << endl;
    cin >> num2;

    double sum = num1 + num2;
    double difference = num1 - num2;
    double product = num1 * num2;
    double quotient = num1 / num2;

    cout << "Sum = " << sum << endl;
    cout << "Difference = " << difference << endl;
    cout << "Product = " << product << endl;
    cout << "Quotient = " << quotient << endl;

    cout<<endl;

    return 0;
}