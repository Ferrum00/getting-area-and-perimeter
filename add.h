#include "incl.h"

using namespace std;

bool restart = false;
bool *pRestart = &restart;

char input;
char *pInput = &input;

int SP, AN; // основные переменые
int SP1;
int P1, S2;
int D1, D2, D3;
float L1;

void run(){
	setlocale (LC_ALL, "RUSSIAN");
	cout << "\nВведите высоту треугольника: \n";
	cin >> SP;
	cout << "\nВведите ширину треугольника: \n";
	cin >> AN;

	// получение 1/4 доли длины
	SP1 = SP / 4;

	// получаем 1 сторону треуголника
	D1 = SP + SP1;
	D2 = SP + SP1;
	D3 = AN;

	// периемтр треугольника
	P1 = D1 + D2 + D3;
	// площадь треугольника

	L1 = 0.59;

	S2 = L1 * SP;
	S2 = S2 * AN;

	cout << "\nПериметр:   " << P1;
	cout << "\nПлощадь:    " << S2;

    cout <<"\nХотите ли начать занаво? [y/n]:   ";
    cin >> pInput;

    if(*pInput == 'y'){
        *pRestart = true;
    }else if(*pInput == 'n'){
        *pRestart = false;
    }
}
