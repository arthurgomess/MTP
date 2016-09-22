#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int mes;
	
	printf("Mes(numerico) que voce nasceu:\n");
	scanf("%i", &mes);
	printf("\n");
	
	switch(mes){
		case 1:
			printf("Voce nasceu em janeiro");
			system("pause");
			break;
		case 2:
			printf("Voce nasceu em feveiro");
			system("pause");
			break;
		case 3:
			printf("Voce nasceu em marco");
			system("pause");
			break;
		case 4:
			printf("Voce nasceu em abril");
			system("pause");
			break;
		case 5:
			printf("Voce nasceu em maio");
			system("pause");
			break;
		case 6:
			printf("Voce nasceu em junho");
			system("pause");
			break;
		case 7:
			printf("Voce nasceu em julho");
			system("pause");
			break;
		case 8:
			printf("Voce nasceu em agosto");
			system("pause");
			break;
		case 9:
			printf("Voce nasceu em setembro");
			system("pause");
			break;
		case 10:
			printf("Voce nasceu em outubro");
			system("pause");
			break;
		case 11:
			printf("Voce nasceu em novembro");
			system("pause");
			break;
		case 12:
			printf("Voce nasceu em dezembro");
			system("pause");
			break;
			
		default:
		printf("Opcao invalida");
		system("pause");
		break;
	}
	
	return 0;
	}
