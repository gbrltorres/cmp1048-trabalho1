#include <iostream>
#include <lib_trabalho1.h>

using namespace std;

int main()
{
    srand(time(0));
    clear_screen();
    initial_screen();
    while (cin.get() != '\n');
    menu();
    return 0;
}
