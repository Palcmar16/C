// 01_OpenCV.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
#include <iostream>  
#include <opencv2/opencv.hpp>    

using namespace cv;  
using namespace std;  

int main()  
{  
   Mat Imag = imread("C:/Users/Pedro Alcantara/Documents/00_Proyectos Visual Studio 2022/Recursos/galones-armada.jpg");  
   if (Imag.empty())  
   {  
       cout << "Error al cargar la imagen" << endl;  
       return -1; // Salir si no se pudo cargar la imagen  
   }  

   Mat resized;  
   resize(Imag, resized, Size(), 0.5, 0.5); // Redimensionar la imagen a la mitad de su tamaño original  
   //resize(Imag, resized, Size(1080, 720)); // Redimensionar la imagen a 1080x720 píxeles  

   imshow("window", resized);  

   int key = waitKey(0); // Esperar hasta que se presione una tecla
   if (key == 27) {
	   destroyAllWindows(); // Cerrar todas las ventanas si se presiona la tecla Esc
   }
   waitKey(0); // Esperar hasta que se presione una tecla  

   return 0;  
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 
//   1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
