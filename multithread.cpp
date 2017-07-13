#include <iostream>
#include <thread>
#include <conio.h>
#include <windows.h>

int cont_var = true;

using namespace std;

int getch_noblock() {
    if (_kbhit())
        return _getch();
    else
        return -1;
}

void thread_function()
{
    char tmp = '0';
    do{
        cout << "Enter an option: " <<endl;
        Sleep(50);
    }while(cont_var);
}

int main()
{
	std::thread threadObj(thread_function);
	do{

        Sleep(70);
        std::cout<<"Display From MainThread"<<std::endl;

	}while(getch_noblock() != 'q');

    cont_var = false;
	threadObj.join();
	std::cout<<"Exit of Main function"<<std::endl;
	return 0;
}
