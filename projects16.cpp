#include <iostream>

using namespace std;

int main(void){
    
    int hour;
    cout << "Enter the current hour (0-23): " << endl;
    cin >> hour;
    
    if(hour>=6 && hour <=11){
        cout << "Morning" << endl;
    }
    else if(hour>=12 && hour <=17){
        cout << "Day" << endl;
    }
    else if(hour>=18 && hour <=23){
        cout << "Evening" << endl;
    }
    else if(hour>=0 && hour <=5){
        cout << "Night" << endl;
    }
    else if(hour>23 || hour < 0){
        cout << "Error..." << endl;
    }
    
    return 0;
}