 #include<iostream>
 using namespace std;

 void mostrarOrden(int [100], int);
 void QuickSort(int [100],int, int);

 int main()
 {
 int i,numero, A[100];
 cout<<"Cuantos elementos desea ingresar : ";
 cin>>numero;
 cout<<"\ningrese los elementos"<<endl;
 for(i=0;i<numero;i++){
 cout<<"A["<<i<<"] = ";
 cin>>A[i];
 }
 cout<<"\nElementos ingresados"<<endl;
 for(i=0;i<numero;i++){
 cout<<A[i]<<" ";
 }

 QuickSort(A,0, numero-1);
 mostrarOrden(A, numero);
 }


 //Funcion ordenamineto QuickSort
 void QuickSort(int A[100], int primero, int ultimo){
 int central, i, j, pivote, temporal;
 central = (primero +ultimo)/2; //posicion del elemento central
 //obtener el valor del elemento central
 pivote = A[central];
 //separar los dos segmentos
 i= primero;
 j= ultimo;

 do{
 //separando las dos partes del Array
 while(A[i]<pivote) i++;//elementos menores al pivote
 while(A[j]>pivote) j--;//Elementos mayores al pivote
 if(i<=j){
//intercambiando los valores
 temporal=A[i];
 A[i]=A[j];
 A[j]=temporal;
 i++;
 j--;
 }
 }while(i<=j);

 if(primero<j){
 QuickSort(A, primero,j);
 }

 if(i<ultimo){
 QuickSort(A,i,ultimo);
 }
 }

 // funcion para imprimir arrglo ordenado
 void mostrarOrden(int A[100], int numero){
 int i;
 cout<<endl;
 cout<<"\nElementos Ordenados"<<endl;
 for(i=0;i<numero;i++){
 cout<<A[i]<<" ";
 }
 }