#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
	int numeros[100], i, n;

	cout << "dime el numero de elementos que tendrá tu arreglo: ";
	cin >> n;

	for (int i = 0;i < n;i++)
	{
		cout << "digite un numero: ";
		cin >> numeros[i];
	}

	for (int i= 0;i < n;i++);
	{
		cout <<i<< "->" << numeros[i]<<endl;
	}
	return 0;
}

