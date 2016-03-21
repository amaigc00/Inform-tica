//Librería que contiene las funciones scanf y printf

#include <stdio.h> 

//Función principal del programa

int main () 

{
	
	// Este programa convierte un número a su  
	
	// mes correspondiente
	
	// Declaro las variables de mi función:
	
	int Num;
	
	//Sustituyo la función ESCRIBA “cadena” por printf
	
	printf("Escribe el número para calcular a qué mes corresponde: "); 
	
	//Sustituyo la función LEA Num por scanf (“%d”, &variableEntera);

	scanf("%d", &Num); //Guarda el número leído en la variable Num 
	
	//Compruebo qué mes es para imprimir la cadena correspondiente
	
	switch (Num)
	{
			
			//Sustituyo la función ESCRIBA “cadena” por printf
		case 1: printf("Enero\n");
			
            break;//Sale del switch porque ya entró en un caso

		case 2: printf("Febrero\n");
			
            break;//Sale del switch porque ya entró en un caso
			
		case 3: printf("Marzo\n");
			
            break;//Sale del switch porque ya entró en un caso
			
		case 4: printf("Abril\n");
			
            break;//Sale del switch porque ya entró en un caso
			
		case 5: printf("Mayo\n");
			
            break;//Sale del switch porque ya entró en un caso
			
		case 6: printf("Junio\n");
			
            break;//Sale del switch porque ya entró en un caso
			
		case 7: printf("Julio\n");
			
            break;//Sale del switch porque ya entró en un caso
			
		case 8: printf("Agosto\n");
			
            break;//Sale del switch porque ya entró en un caso
			
		case 9: printf("Septiembre\n");
			
            break;//Sale del switch porque ya entró en un caso
			
		case 10: printf("Octubre\n");
			
            break;//Sale del switch porque ya entró en un caso
			
		case 11: printf("Noviembre\n");
			
            break;//Sale del switch porque ya entró en un caso
			
		case 12: printf("Diciembre\n");
			
            break;//Sale del switch porque ya entró en un caso
			
			//Si no es ningún valor de los anteriores, error 
		default: 
			printf("Error. El número introducido ha de estar entre 1 y 12\n");
			
	}
	
	//Fin del programa
	
	return 0;
	
}