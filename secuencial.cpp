#include <iostream>
using namespace std;

// Funcion que busca en todo el arreglo (desordenado)
int secuencialDes(int[100],int, int);
int main(){
    int Arr[100], num,datoAbuscar,posicion;
    cout<<"Ingrese el tamaño del arreglo: ";
    cin>>num;

    cout<<"Ingrese los numeros del arreglo: ";
    for(int i=0;i<num;i++){
        cin>>Arr[i];
    }
    cout<<"Ingrese el numero a buscar: ";
    cin>>datoAbuscar;

    //Mostrar la posicion del arreglo hallado
    posicion=secuencialDes(Arr,num,datoAbuscar);
    cout<<posicion;

    return 0;
}

int secuencialDes(int A[100],int n,int dato){
    int pos,i;
    pos=0;
    i=0;
    while(i<n && A[i]!=dato){
        i++;
    }
    if(i<n){
        pos=i;
    }
    return pos;
}