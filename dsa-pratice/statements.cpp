#include <iostream>
using namespace std;

int main(){
    // handling choices
    int savings;
    cin >> savings;

    if (savings > 5000){
        if (savings > 10000){
            cout << "road trip to pharaoh\n";
        }else{
            cout << "road trip to heritage-garden\n";
        }
    } else if(savings > 2000){
        cout << "road trip near by city\n";
    }else{
        cout << "sitting home and watching movies\n";

    }
    return 0;
}

