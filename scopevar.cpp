#include <iostream>

using namespace std;

int gvar1;
float gvar2;
std::string gvar3;

int main(){

    int lvar1;
    float lvar2;
    std::string lvar3;

    cout << "Global 1: " << gvar1 << "\t Local 1: " << lvar1 << endl;
    cout << "Global 2: " << gvar2 << "\t Local 2: " << lvar2 << endl;
    cout << "Global 3: " << gvar3 << "\t Local 3: " << lvar3 << endl;


    return 0;
}
