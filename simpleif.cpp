#include <iostream>
#include <ctime>   // Dibutuhkan untuk time()
#include <cstdlib> // Dibutuhkan untuk rand() dan srand()

using namespace std;

int main()
{
    int x;

    srand(time(0));
    x = rand() % 10;
}