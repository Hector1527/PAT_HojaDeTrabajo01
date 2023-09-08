#include "Ejercicio02.h"
#include <algorithm>
#include <string>

bool Ejercicio02::isPalindrome(string& s)
{
        s.erase(remove_if(s.begin(), s.end(), [](char c) {
            return !isalpha(c);
            }), s.end());

        transform(s.begin(), s.end(), s.begin(), ::tolower);

        return s == string(s.rbegin(), s.rend());
}
