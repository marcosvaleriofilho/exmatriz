#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define n 5
/*Faça um algoritmo que leia uma matriz de no máximo 5 linhas e 5 colunas e que:
Troque os valores da coluna 0 com a coluna 2
A soma dos valores da diagonal principal
Determine a soma de cada linha desta matriz, coloque o resultado em um vetor
Determine o maior valor de cada coluna dessa matriz, coloque o resultado em um vetor */
int main()
{
  setlocale(LC_ALL, "Portuguese");
  int i, j, mat[n][n], troca,somaLinhas[n],soma,d=0,somad,m,maior=0;

  for (i=0; i<n; i++)
  {
    for (j=0; j<n; j++)
     {
      printf("Matriz[%d][%d] = ", i, j);
      scanf("%d", &mat[i][j]);
     }
  }
  printf("\nMatriz:\n");
  for (i=0; (i<n); i++)
  {
    for (j=0; (j<n); j++)
    {
     printf("%2d ", mat[i][j]);
    }
    printf("\n");
  }
  /* Troca da coluna 0 com a 2*/
    for (i = 0; i < n; ++i) {
        troca = mat[i][1-1];
        mat[i][1-1] = mat[i][2-0];
        mat[i][2] = troca;
    }
    printf("\nMatriz depois da troca:\n");
  for (i=0; (i<n); i++)
  {
    for (j=0; (j<n); j++)
    {
     printf("%2d ", mat[i][j]);
    }
    printf("\n");
  }
  /* Soma dos valores da diagonal principal*/
   for (i = 0; i < n; ++i)
            {
            somad = somad+ mat[i][i];
            d = d + mat[i][m - i - 1];
            }
    printf("\nSoma da diagonal principal: %d \n", somad);
    /*Soma das linhas */
    for(i=0;i<n;i++)
    {
        soma = 0;
        for(j=0;j<n;j++)
        {
            soma += mat[i][j];
        }
        somaLinhas[i] = soma;
    }
    printf("\nVetor com a soma das linhas:\n");
    for(i=0;i<5;i++)
    {
        printf("\nLinha %d: %d\n", i, somaLinhas[i]);
    }
    /*Maior valor de cada coluna dessa matriz*/
   for(i = 0; i < n; i++)
		{
        int maior = mat[0][i];
        for(j = 1; j < n; j++)
            {
            if(mat[j][i] > maior)
                {
            maior = mat[j][i];
                }
            }
        printf("\nO maior elemento da coluna %d é igual a: %d\n",i,maior);
        }

    system("pause");
    return 0;
}
