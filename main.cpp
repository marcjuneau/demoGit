#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1252);
    cout << "Vive l'été!" << endl << flush;
    cin.get();
    return 0;
}
