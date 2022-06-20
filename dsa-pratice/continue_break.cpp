
#include <iostream>

using namespace std;

//    for (int i = 0; i < 10; i++) {
//        if (i % 2 == 0) {
//            // skips th condition matches
//            continue;
//        }
//        cout << i << endl;
//    }

int main() {


    int n;
    cin >> n;
    int i;
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            cout << "Non prime" << endl;
            break;
        }
    }

    if (i == n){
            cout << "Prime" << endl;

    }
    return 0;
}