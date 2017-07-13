#include <iostream>

using namespace std;

int main(){

    for(int j = 1; j <= 5; j++){
        for (int i = 1; i <= 10; i++){
            cout.width(4);
            cout << i*j;
        }
        cout << '\n';

    }



    return 0;
}
