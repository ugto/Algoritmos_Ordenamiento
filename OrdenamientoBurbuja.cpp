#include<iostream>


using namespace std;

int main(){
	int numeros[]={3,34,53,15,6};
	int i,j,aux;
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(numeros[i]>numeros[j+1])
			{
				aux=numeros[i];
				numeros[i]=numeros[j];
				numeros[j+1]=aux;
			}
		}
	}
	cout<<"Orden Ascedente: ";
	for(i=0;i<5;i++)
	{
		cout<<numeros[i]<<" ";
	}
	
	cout<<"\nOrden Descedente: ";
	for(i=4;i>=0;i--)
	{
		cout<<numeros[i]<<" ";
	}
	
	return 0;
}
