#include <iostream>
using namespace std;

int main(void){
    int num;
    cout << "Enter your points: "<<endl;
    cin>>num;



    if(!num){
        cout<<"Error. You have not entered points."<<endl;
        return 1;
    }
    int score = num;
    if (score>=90){
        cout<<"Score: A "<<endl;
    }
    else if(score>=80){
        cout<<"Score: B "<<endl;
    }
    else if(score>=70){
        cout<<"Score: C "<<endl;
    }
    else if(score<70){
        cout<<"Score: D "<<endl;
    }

    cout<<endl;
    return 0;
}