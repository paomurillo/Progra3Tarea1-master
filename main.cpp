#include "Evaluador.h"
#include <iostream>
using namespace std;
using std:: endl;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
    return a+b;
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    return a-b;
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    return a*b;
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)

{
    if(b>0)
    {
       return a/b;
    }
    else
    {
      return NULL;
    }

}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
      return b;
    }

}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
  if(a<b)
    {
        return a;
    }
    else
    {
      return b;
    }
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
    if(a>b && a>c)
    {
        return a;
        }
        else
            {
            if(b>a && b>c )
            {
              return b;

            }
            else
            {
                return c;
            }
            }
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
    arreglo[posicion]= valor;

}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
    int value;
    value = arreglo[posicion];  // Value obtiene el valor del arreglo
    return value;// devuelve el valor
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
      int i;
      int mayor;
      mayor=arreglo[0];
     for ( i=0; i<tamano; i++)
      {
        if (mayor<arreglo[i])
        mayor=arreglo[i];
      }

  return mayor;

}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
    int i;
      int menor;
      menor=arreglo[0];
     for ( i=0; i < tamano; i++)
      {
        if (menor > arreglo[i])
        menor=arreglo[i];
      }

  return menor;
}// En este codigo tuve ayuda... :(

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{

    float notas=0;
    float promedio=0;
    int i=0;

 for( ; i<tamano ; i++)
        {

    notas += arreglo[i];

        }
    promedio= notas/tamano;



return promedio;
}


int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
