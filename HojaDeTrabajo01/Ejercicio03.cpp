#include "Ejercicio03.h"

bool Potencia(int n)
{
    if (n == 1)
        return true;

    if (n < 1 || n%2!=0)
        return false;

    return Potencia(n / 2);

}

bool Ejercicio03::isPowerOfTwo(int n)
{
    return Potencia(n);
}
