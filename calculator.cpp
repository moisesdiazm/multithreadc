#include <iostream>

using namespace std;

main(){

    double var1, var2;

    cout << "Enter first number: ";
    cin >> var1;

    cout << "Enter second number: ";
    cin >> var2;

    cout << "What do you want to do with the numbers? " << endl;
    cout << "+ add" << endl;
    cout << "- substract" << endl;
    cout << "/ divide" << endl;
    cout << "* multiply" << endl;
    cout << "% mod" << endl;

    char decision;
    cout << "Decision: ";
    cin >> decision;

    if(decision != '+' && decision != '-' && decision != '/' && decision != '*' && decision != '%')
        cout << "Invalid option" << endl;
    else{
        float ret_val = 0;
        switch (decision){

            case '+':
                ret_val = var1 + var2;
                break;
            case '-':
                ret_val = var1 - var2;
                break;

        }
        cout << var1 << decision << var2 << "= " << ret_val;
    }
}

