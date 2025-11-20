#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    int i = 0;
    while(i++<4)cout << i;
    return 0;
}