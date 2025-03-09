#include <iostream>

using namespace std;

int main(void){

    double num1, num2;
    char operation;
    
    cout <<"Enter the first number: "<<endl;
    cin >> num1;

    cout <<"Enter the second number: "<<endl;
    cin >> num2;

    cout <<"Enter operation(+, -, *, /): "<<endl;
    cin >> operation;

    switch(operation){
        case '+':
        cout << "Result: " << num1+num2 << endl;
        break;
        case '-':
        cout << "Result: " << num1-num2 << endl;
        break;
        case '*':
        cout << "Result: " << num1*num2 << endl;
        break;
        case '/':
        if (num2!=0){
            cout << "Result: " << num1/num2 << endl;
        }
        else{
            cout << "Error: division by zero!" << endl;
        }
        break;
        default:
            cout << "Incorrect operation." << endl;
        }

    return 0;
}

   
