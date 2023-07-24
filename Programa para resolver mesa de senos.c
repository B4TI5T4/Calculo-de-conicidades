#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

#define Pi 3.14159265
int main()
{
	int opcion;
	float a,b,result,result2,r1,r2,d,h,bp,der;
	printf("Mesa de senos\n\n");
	printf("Es un instrumento de medicion analogico que se encarga de determinar los angulos de conicidad en las piezas de fabricacion o manufacturadas como control de calidad\n\n"); 
	printf("Que datos quieres obtener?\n\n");
		printf("1. Los valores de distancia y distancia entre rodillos \n");
		printf("2. Angulo de conicidad de una pieza en GMS\n");
		printf("3. Determinar el angulo alfa en GMS\n");
		printf("Elija una operacion: ");
		scanf("%d",&opcion);
	switch(opcion)
{

	case 1:
		{
		
		printf("Elegiste Los valores de distancia y distancia entre rodillos. \n");
		printf("Ilustracion:  \n\n");
			printf("                   .\n");
			printf("                  /|\n");
			printf("                 / |\n");
			printf("                /  |\n");
			printf("  Distancia    /   |\n");
			printf("   entre      /    |\n");
			printf("  rodillos   /     | Altura\n");
			printf("            /      |\n");
			printf("           /       |\n");
			printf("          / angulo°|\n");
			printf("         /_________| \n");
			printf("          Distancia \n\n");
		printf("¿Cual es el valor de tu altura en mm?\n");
			scanf("%f",&a);
		printf("¿Cual es tu angulo?\n");
			scanf("%f",&b);
		printf("La distancia entre rodillos es:\n");
			result= a/sin(b*(Pi/180)) ;
			printf("%f " ,result);
		printf("La distancia es:\n");
			result2= cos(b*Pi/180)*result;
			printf("%f", result2);
			
		break;
	}
	
	case 2:
		{
		printf("Elegiste determinar el angulo de conicidad de la siguiente pieza en GMS \n");
		printf("Ilustracion:  \n\n");
			printf("           \n");
			printf("           \n");
			printf("           \n");
			printf("                     _______________________________________    ____ \n");
			printf("             @@@@@@@                                        |       |\n");
			printf("            @     __@_______________________________________|       |\n");
			printf("           @   @@@   @       Radio  |                       |       |\n");
			printf("          @   @   @   @      menor  |                       | Radio Mayor \n");
			printf("           @   @@@___@______________|_______________________|       |\n");
			printf("            @       @                                       |       |\n");
			printf("             @@@@@@@ _______________________________________|   ____|\n");
			printf("                                    -Distancia entre radios-                    \n\n");
		printf("           \n");
		printf("Inserta el valor de tu radio mayor en mm\n");
			scanf("%f",&r1);
		printf("Inseta el valor de tu radio mayor en mm\n");
			scanf("%f",&r2);
		printf("Inseta el valor de tu distancia en mm\n");
			scanf("%f",&d);
		printf("La diferencia de rodillos es:\n");
			h= r1-r2;
			printf("%f\n",h);
		printf("El angulo de conicidad es: \n");
			result=atan(h/d);
			printf("%f\n",result);
			
		break;
	}
	case 3:
		{
		printf("Elegiste determinar el angulo alfa en GMS En mesa de senos\n");
		printf(" \n\n");
			printf("                   ._\n");
			printf("                  /|_|\n");
			printf("                 / |_|\n");
			printf("                /  |_|\n");
			printf("  Distancia    /   |_|\n");
			printf("   entre      /    |_|\n");
			printf("  rodillos   /     |_| Bloque patron\n");
			printf("            /      |_|\n");
			printf("           /       |_|\n");
			printf("          / angulo°|_|\n");
			printf("         /_________|_| \n");
			printf("           \n\n");
		printf("Inserta el valor del Afilamiento del bloque patron en mm\n");
			scanf("%f",&bp);
		printf("Inserta la distancia entre rodillos\n");
			scanf("%f",&der);
		printf("La distancia entre rodillos es:\n");
			result= asin(bp/(der*25.4));
			printf("%f\n",result);
		
		break;
	}
	default:
		printf("Opcion no valida\n");
		break;
}
}
	
	
	
