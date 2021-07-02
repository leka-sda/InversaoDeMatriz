#include <stdio.h>
#include <stdlib.h>
    
    // DECLARAÇÃO DA VARIÁVEL
	int matrizA[3][4];
    int matrizT[4][3];
    int m, n;
    
	int main() {

	for (m=0; m<3; m++)
	{
		for (n=0; n<4; n++)
		{
			printf ("Insira o elemento da linha [%d] e coluna [%d] da Matriz A", m+1, n+1);
			scanf ("%d", &matrizA[m][n]);
		}
	}
	for (m=0; m<3; m++)
	{
          for (n=0; n<4; n++) 
		  {
            printf("%d\t", matrizA[m][n]);
		  }
		  printf("\n");
	}
	for (m=0; m<4; m++)
	{
			for (n=0; n<3; n++)
			{
				matrizT[m][n]=matrizA[n][m];
			}
	}
	printf ("A Matriz transposta de A para T passa a ser:\n");
	for (m=0; m<4; m++)
	{
          for (n=0; n<3; n++) 
		  {
            printf("%d\t", matrizT[m][n]);
		  }
		  printf("\n");
	}
	return (0);
}