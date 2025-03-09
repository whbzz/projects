#include <iostream>
using namespace std;

int main(void){
    
    int num;
    cout<<"Please enter a positive number: "<<endl;
    cin>>num;

    if (num<=0){
        cout<<"Please enter a positive number!!!"<<endl;
    return 1;
    }



    int i = 1;
    while(i<=num){
        cout<<"i = "<<i<<endl;
        i++;
    }

    cout<<endl;
    return 0;
} 