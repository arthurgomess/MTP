#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void parimp();
int main()
{
	parimp();
	
	return 0;

}

void parimp()
{
    int i=2, j=1;
    char parouimpar[10];
    
    printf("pares ou impares?\n");
    fflush(stdin);
    gets(parouimpar);
    
    if (strcmp(parouimpar, "pares")==0)
    {
    	while(i<11)
    	{
    		printf ("%d  ", i);
    		i=i+2;
    	}
    }
    if (strcmp(parouimpar, "impares")==0)
    {
    		while(j<11)
    	{
    		printf ("%d  ", j);
    		j=j+2;
    	}    
	}
   
}
