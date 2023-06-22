// 2Exam.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{
    int numbers[3][4] = { {2,3,1,4},{9,8,7,9},{3,2,1,5} };
	int sum=0;
	int total = 0;
	cout<<"los numeros pares son: "<<endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (numbers[i][j]%2==0)
			{
				sum = sum + numbers[i][j];
				cout << numbers[i][j]<<endl;
			}
			
		}

	}
	cout << "las posiciones que seran sumadas son: "<<endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (numbers[i][j] % 2 == 0)
			{
				cout << i << "," << j << endl;
				total = total + (i * 10) + j;
			}

		}

	}
    cout <<"los numeros pares sumados son: "<<sum<<endl;
	cout << "la suma total de las posiciones es: " << total << endl;
	cout << "los pares sumados menos la suma de las posiciones es: " << sum - total;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
