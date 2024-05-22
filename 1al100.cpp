#include <iostream>
using namespace std;
int main()
{
    int n[100];
    for (int i = 0; i < 100; ++i)
    {
        n[i] = i + 1;
    }
    int suma = 0;
    for (int i = 0; i < 100; ++i)
    {
        suma = suma + n[i];
    }

    cout << "La suma de 1 al 100 es : " << suma;

    return 0;
}
