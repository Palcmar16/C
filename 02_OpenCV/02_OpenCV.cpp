// 02_OpenCV.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;    

int main() {

Mat imag = imread("C:/Users/Pedro Alcantara/Documents/00_Proyectos Visual Studio 2022/Recursos/ruido.jpg", IMREAD_COLOR);
if (imag.empty()) {
	cout << "Error al cargar la imagen" << endl;
	return -1;
}
Mat resizedImage; // Declarar la variable resizedImage
resize(imag, resizedImage, Size(), 0.5, 0.5); // Redimensionar la imagen a la mitad
Mat bilateralImage; // Declarar la variable bilateralImage
bilateralFilter(resizedImage, bilateralImage, 5, 50, 50); // Aplicar filtro bilateral
imshow("Imagen Original", resizedImage); // Mostrar imagen original
imshow("Imagen con Filtro Bilateral", bilateralImage); // Mostrar imagen con filtro bilateral	
waitKey(0); // Esperar a que se presione una tecla
return 0; // Agregar return 0 para finalizar correctamente el programa
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
