#include <iostream>

using namespace std;

void initMenu();
void menuDecision(int);
double areaCircle(double);
double areaCircle(int);
const double PI = 3.1416;


int main(){

    int choice;

    initMenu();
    cin >> choice;

    menuDecision(choice);

    return 0;
}

void initMenu(){

    cout << "Enter the option: " << endl;
    cout << "1. Circle" << endl;
    cout << "2. Square" << endl;
    cout << "3. Rectangle" << endl;
    cout << "4. Triangle" << endl;
}

void menuDecision(int choice){

    double r;

    switch(choice){

        case 1:
            cout << "Enter the radius: " << endl;
            cin >> r;
            areaCircle(r);
            break;

        case 2:
            break;

        case 3:
            break;

        default:
            cout << "Wrong option " <<endl;


    }
}

double areaCircle(double area){

    double result = PI*area*area;
    cout << "The area for the circle is: " << result << endl;
    return result;
}
