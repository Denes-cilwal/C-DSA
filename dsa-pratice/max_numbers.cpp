//
// Created by dinesh.silwal on 20/06/2022.
//


#include <iostream>
using  namespace  std;

int main(){
    int a, b, c;

    // taking input from user
    cin >> a ;
    cin >> b;
    cin >> c;

    if (a >b){
        if (a > c){
            cout << "the max number is a\n";
        }else{
            cout << "the max number is c\n";
        }
    }else if(b>c){

            cout << "the max number is b\n";

        }else{
            cout << "the max number is c\n";

        }

    return  0;
}

