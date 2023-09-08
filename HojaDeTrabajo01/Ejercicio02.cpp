#include "Ejercicio02.h"
#include <algorithm>
#include <string>


bool Palindroma(string s, int izq, int der)
{
    if (izq >= der)
        return true;

    if (s[izq] != s[der])
        return false;

    return Palindroma(s, izq + 1, der - 1);
}
bool Ejercicio02::isPalindrome(string& s)
{

    return Palindroma(s, 0, s.length() - 1);
}
