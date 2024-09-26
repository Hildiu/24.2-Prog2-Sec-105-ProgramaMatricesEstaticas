/*------------------------------------------------------------------
 * Dato de entrada:  numeros (int)
 * dato de Salida:  matriz, el menor de los elementos de la matriz
 -----------------------------------------------------------------*/

#include <iostream>
#include <iomanip>

using namespace  std;

void imprimirMatriz( int matriz[][4], int filas, int col);
int hallarElMenor(int matriz[][4], int filas, int col);

int main()
{  int matriz[3][4];

    for(int f=0; f<3; f++ )
    {
        for(int c=0; c<4; c++)
        {
            cout << "matriz[" << f << "][" << c << "]= ";
            cin >> matriz[f][c];
        }
    }
    cout << "\n\n";
    imprimirMatriz(matriz, 3, 4);
    cout << "\n";
    cout << "El elemento mas pequenno de la matriz es: " << hallarElMenor(matriz, 3, 4);

    return 0;
}

void imprimirMatriz( int matriz[][4], int filas, int col  )
{
  for(int f=0; f<filas; f++)
  {
      for(int c=0; c<col; c++)
          cout << setw(5) << matriz[f][c];
      cout << "\n";
  }
}

int hallarElMenor(int matriz[][4], int filas, int col)
{
  int menor = matriz[0][0];

  for(int f=0; f<filas; f++)
      for(int c=0; c<col; c++)
          if( matriz[f][c] < menor)
              menor = matriz[f][c];
  return menor;
}