
#include <iostream>  
#include<windows.h> // Incluir la biblioteca windows.h para cambiar el color de la consola en Windows	

using namespace std;  
// incluir variables b y c  
  
float d = 0;  
template <typename T>
T suma(T a, T b);
void sistema(); // Declaración de la función sistema para configurar la consola
void leervalores(float& a, float& b); // Declaración de la función leervalores para leer los valores de b y c
int main()  
{
	float a = 0;
	float b = 0;
	sistema();
	leervalores(a, b); // Llamar a la función leervalores para leer los valores de b y c desde la entrada estándar
   // Mostrar los valores ingresados  
   cout << "El valor de b es: " << a << endl;  
   cout << "El valor de c es: " << b << endl;
   d = suma(a, b); // Llamar a la función suma con b y c como argumentos
   cout << "El valor de d (suma de b y c) es: " << d << endl; // Mostrar el resultado de la suma
   
   
   system("pause"); // Pausa la ejecución del programa para que el usuario pueda ver los resultados
   system("cls"); // Limpia la consola antes de mostrar el mensaje
   return 0; // Indica que el programa terminó correctamente  
}
template <typename T>
T suma(T a, T b)
{
	return a + b; // Función que suma dos valores y devuelve el resultado
	
}
void sistema() {
	system(" title Programa de prueba"); // Cambia el título de la ventana de la consola
	//system("mode con: cols=80 lines=25"); // Establece el tamaño de la consola a 80 columnas y 25 líneas
	//system("chcp 65001"); // Cambia la página de códigos a UTF-8 para soportar caracteres especiales
	system("color 0B"); // Cambia el color de fondo de la consola a verde claro (0A)
}
void leervalores(float& a, float& b) {
	cout << "Ingrese un valor para b: ";
	cin >> a; // Leer valor de b desde la entrada estándar
	cout << "Ingrese un valor para c: ";
	cin >> b; // Leer valor de c desde la entrada estándar
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
