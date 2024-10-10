#include <iostream>

using namespace std;


int main()
{
	int numeros[]={4,2,3,1,5};
	int i, pos,aux;
	// variable i para ciclo, variable pos para posicion, variable aux  para el intercambio de posicion
	
	
	// bucle para rrecorrer todo el arreglo
	for(i=0;i<5;i++)
	{
		// puntero donde esa el puntero
		pos=i;
		// en que numero nos encontramos en el arreglo
		aux=numeros[i];
		
		//numero a su izquierda es mayor a su poscion actual hay un cambio "Si numero izquierda>numeroActual = cambio
		while((pos>0)&&(numeros[pos-1]>aux))
		{
			// con esto se hace el intercambio
			numeros[pos]=numeros[pos-1];
			//la posicin disminuye para continuar con el recorrido
			pos--;
		}
	
		// con esto referscamos la pisicion de l bucle
		numeros[pos]=aux;
	}
	
	
	cout<<"\nOrden ascendente:";
	for(i=0;i<5;i++)
	{
		cout<<numeros[i]<<" ";
	}
	
	cout<<"\nOrden Descendente:";
	for(i=4;i>=0;i--)
	{
		cout<<numeros[i]<<" ";
	}
	
	return 0;
}

