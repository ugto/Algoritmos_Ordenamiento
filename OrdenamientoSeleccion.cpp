#include<iostream>


using namespace std;

int main ()
{
	int numeros[]={3,2,1,5,4};
	int i,j,aux,min;
	// recorre todo el arreglo
	for(i=0;i<5;i++)
	{
		// minimo sera = i y suponiendo que el primero numero es el minimo
		min=i;
		for(j=i+1;j<5;j++)
		{
			if(numeros[j]<numeros[min])
			{
				min=j;
			}
			
		}
		aux=numeros[i];
		numeros[i]=numeros[min];
		numeros[min]=aux;
	}
	
	cout<<"Orden Ascendente: ";
	for(i=0;i<5;i++)
	{
		cout<<numeros[i]<<" ";
	}
	
	cout<<"\nOrdenamineto Descendente: ";
	for(i=4;i>=0;i--)
	{
		cout<<numeros[i]<<" ";
	}
	
	return 0;
}
