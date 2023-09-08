#include "Ejercicio04.h"
#include <iostream>
using namespace std;

void generarCombinaciones1(int n, int abierto, int cerrado, string actual, vector<string>& resultado) {
	if (abierto == n && cerrado == n) {
		resultado.push_back(actual);
		return;
	}

	if (abierto < n) {
		generarCombinaciones1(n, abierto + 1, cerrado, actual + '(', resultado);
	}

	if (cerrado < abierto) {
		generarCombinaciones1(n, abierto, cerrado + 1, actual + ')', resultado);
	}
}

vector<string> generarCombinaciones(int n) {
	vector<string> resultado;
	generarCombinaciones1(n, 0, 0, "", resultado);
	return resultado;
}

vector<string> Ejercicio04::generateParenthesis(int n)
{
	vector<string> resultado = generarCombinaciones(n);
		
	return resultado;

}