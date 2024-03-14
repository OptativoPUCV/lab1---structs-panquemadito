#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
Ejercicio 1: Encuentra el Elemento Mayor
Descripción: Escribe una función que tome un arreglo de enteros
y su tamaño, y devuelva el valor más grande del arreglo.
*/
int findMax(int arr[], int size)
{
    if (size <= 0) 
    {
        return -1; 
    }

    int max = arr[0]; 
    for (int i = 1; i < size; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    return max;
}
/*
Ejercicio 2: Invertir un Arreglo
Descripción: Escribe una función que tome un arreglo y su tamaño, y luego
invierta el orden de sus elementos.
*/

void reverseArray(int array[], int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++)
      {
        temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }
}

/*
Ejercicio 3: Filtrar Números Pares
Descripción: Escribe una función que tome un arreglo de enteros
y su tamaño, y luego devuelva un nuevo arreglo que contenga solo
los números pares del arreglo original.
newsize aputa a una direccion validia que no ha sido inicializada con ningun valor especifico.
*newsizedebe almacenar el tamano del nuevo arreglo que se retorna
*/
int *filterEvenNumbers(int arr[], int size, int *newSize)
{
  int *nuevo = (int *)realloc(NULL, (*newSize) * sizeof(int));
  if (nuevo == NULL) exit(EXIT_FAILURE);

  *newSize = 0;
  for (int i = 0; i < size; i++)
    {
      if (arr[i] % 2 == 0)
      {
        (*newSize)++;
        nuevo[(*newSize) - 1] = arr[i];
      }
    }
  return nuevo;
}


/*
Ejercicio 4: Fusión de dos Arreglos Ordenados
Descripción: Escribe una función que tome dos arreglos
ordenados de menor a mayor y sus tamanos, y luego fusione estos dos arreglos en un tercer arreglo también ordenado de menor a mayor.
*/
void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2,
                       int result[])
{
  int nuevaTalla = size1 + size2;
  for (int i = 0; i < nuevaTalla; i++)
    {
      if (i < size1) result[i] = arr1[i];
      else result[i] = arr2[i - size1];
    }
  for (int i = 0; i < nuevaTalla - 1; i++) 
  {
    for (int j = 0; j < nuevaTalla - i - 1; j++) 
    {
      if (result[j] > result[j + 1]) 
      {
        int temp = result[j];
        result[j] = result[j + 1];
        result[j + 1] = temp;
      }
    }
  }
}

/*
Ejercicio 5: Comprobación de Ordenación
Descripción: Escribe una función que tome un arreglo y su tamaño,
y luego devuelva 1 si el arreglo está ordenado en orden ascendente,
  0 si no está ordenado, y -1 si está ordenado en orden descendente.
*/

int checkSorted(int arr[], int size)
{
  int noDesciende = 1;
  int noAsciende = 1;

  for (int i = 0;i < size - 1 ; i++)
  {
    if (arr[i] > arr[i + 1])  
    {
      noDesciende = 0;
    }
    
    if (arr[i] < arr[i + 1])
    {
      noAsciende = 0;
    }
  }
  if (noDesciende) return 1;
  else if (noAsciende) return - 1;
  else return 0;
}
    
/*
Ejercicio 6: Información de una Biblioteca
Descripción: Vamos a representar la información de una biblioteca. En la
biblioteca, hay libros, y cada libro tiene un autor. Queremos organizar esta
información utilizando estructuras anidadas en C. Escribe la función para
inicializar la información de un libro.
*/

typedef struct {
  char nombre[50];
  int anioNacimiento;
} Autor;

typedef struct {
  char titulo[100];
  Autor autor;
  int anioPublicacion;
} Libro;

void inicializarLibro(Libro *libro, const char *titulo, const char *nombreAutor,
                      int anioNacimiento, int anioPublicacion) 
{
  strcpy(libro->titulo, titulo) ;
  strcpy (libro -> autor.nombre, nombreAutor) ;
  libro -> autor.anioNacimiento = anioNacimiento;

  libro ->anioPublicacion = anioPublicacion;
}

/*
Ejercicio 7: Lista enlazada de números
Descripción: Escribe una función que tome un arreglo de enteros y su tamaño, y
luego cree una lista enlazada usando la estructura Nodo. Cada nodo de la lista
debe contener un número del arreglo, y los nodos deben estar enlazados en el
mismo orden que los números aparecen en el arreglo. El último nodo de la lista
debe apuntar a NULL. La función debe devolver un puntero al primer nodo de la
lista enlazada.
Recuerda reservar memoria dinámica para cada nodo usando malloc.
  */

typedef struct nodo {
  int numero;
  struct nodo *siguiente; // puntero al siguiente nodo
} Nodo;

Nodo *crearListaEnlazada(int arr[], int size) { return NULL; }
