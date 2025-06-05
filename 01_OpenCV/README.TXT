Este código en C++ utiliza la biblioteca OpenCV para cargar, redimensionar y mostrar una imagen en una ventana. A continuación se describe paso a paso:
1.	Inclusión de bibliotecas
•	#include <iostream>: Permite la entrada y salida estándar en C++.
•	#include <opencv2/opencv.hpp>: Incluye todas las funcionalidades principales de OpenCV.
2.	Espacios de nombres
•	using namespace cv;: Permite usar las clases y funciones de OpenCV sin anteponer cv::.
•	using namespace std;: Permite usar las clases y funciones estándar de C++ sin anteponer std::.
3.	Función principal (main)
•	Se intenta cargar una imagen desde una ruta específica usando imread.
•	Si la imagen no se carga correctamente (Imag.empty()), muestra un mensaje de error y termina el programa.
•	Si la imagen se carga correctamente, se crea una nueva imagen resized y se redimensiona a la mitad de su tamaño original usando resize.
•	Se muestra la imagen redimensionada en una ventana llamada "window" con imshow.
•	El programa espera a que el usuario presione una tecla con waitKey(0).
•	Si la tecla presionada es Esc (código 27), se cierran todas las ventanas con destroyAllWindows.
•	Se vuelve a esperar otra tecla antes de finalizar el programa.
