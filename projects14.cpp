#include <iostream>
using namespace std;

int main(void){

    int num;
    cout << "Enter number: "<<endl;
    cin>>num;

    if(!num){
        cout<<"Error..."<<endl;
        return 1;
    }

    int day = num;
    switch(day){
        case 1:
        cout << "Monday" << endl;
        break;
        case 2:
        cout << "Tuesday" << endl;
        break;
        case 3:
        cout << "Wednesday" << endl;
        break;
        default:
        cout << "Unknown day" << endl;
        break;
    
    }

    return 0;
}