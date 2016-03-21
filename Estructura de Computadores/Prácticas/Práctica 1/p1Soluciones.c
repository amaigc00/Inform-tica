//El algoritmo en pseudocódigo sería
//ALGORITMO ConvierteCelsiusAFarenheit
// ENTRADAS:
//   grados_celsius: Real ; Grados Celsius
// SALIDAS:
//   grados_farenheit: Real ; Grados Farenheit
// VARIABLES:
//   grados_celsius: Real ;
//   grados_farenheit: Real ;
// INICIO
//   ESCRIBA “Escribe un número de grados Celsius: ”
//   LEA grados_celsius
//   grados_farenheit ← grados_celsius * 9/5 + 32 
//   ESCRIBA “Los grados farenheit son: “
//   ESCRIBA grados_farenheit
//   ESCRIBA “Fin del algoritmo”
// FIN




//Librería que contiene las funciones scanf y printf
#include <stdio.h>

//Función principal del programa
int main ()
{
// Este programa convierte los grados celsius leídos en grados farenheit
// mostrando el resultado por pantalla
// Declaro las variables de mi función
float grados_celsius, grados_farenheit;

//Sustituyo la función ESCRIBA “cadena” por printf
printf("Escribe los grados Celsius: ");

//Sustituyo la función LEA grados_celsius por scanf (“ %f”, &variableReal);
scanf("%f", &grados_celsius); //Guarda el número leído en la variable grados_celsius

//Convierto los grados celsius a farenheit. Pongo 9.0 para que coja el resultado real de dividir 9 entre 5:
// Si no lo convierto a real me daría de resultado 1 en vez de 1.8
grados_farenheit = grados_celsius * (9.0/5) + 32;

//Imprimo los resultados
printf("Los grados farenheit son: %f", grados_farenheit);


printf("\nFin del algoritmo\n");


//Fin del programa
return 0;
}
