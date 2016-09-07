#include <string.h>
#include <stdio.h>

int main()
{
	
    char frase[256];
    int tam, i;

    printf("Informe uma frase: ");
    fflush(stdin);
    gets(frase);
    

    
    for( i=0; i<5; i++)
    {
    	if((frase[i]>='A')&&(frase[i]<='M'))
    	{
    		frase[i]=frase[i]+13;
		}
		
		if((frase[i]>='N')&&(frase[i]<='Z'))
    	{
    		frase[i]=frase[i]-13;
		}
		
		if((frase[i]>='a')&&(frase[i]<='m'))
    	{
    		frase[i]=frase[i]+13;
		}
		
		if((frase[i]>='n')&&(frase[i]<='z'))
    	{
    		frase[i]=frase[i]-13;
		}
	}
	
	for( i=0; i<5; i++)
	{
	    printf("%d", frase[i]);
	}
	
	printf("\n\n");
	
    return 0;
}
