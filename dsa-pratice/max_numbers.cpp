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
            cout << a << endl ;
        }else{
            cout << c << endl ;
        }
    }else if(b>c){

        cout << b << endl ;

        }else{
        cout << c << endl ;

        }

    return  0;
}

