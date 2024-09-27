#include <iostream>
using namespace std;

// Funcion que busca en todo el arreglo (desordenado)
int secuencialDes(int[100],int, int);
int secuencialOrd(int[100],int,int);
int main(){
    int Arr[100], num,datoAbuscar,posicionOrd,posicionDes;
    cout<<"Ingrese el tamaño del arreglo: ";
    cin>>num;

    cout<<"Ingrese los numeros del arreglo: ";
    for(int i=0;i<num;i++){
        cin>>Arr[i];
    }
    cout<<"Ingrese el numero a buscar: ";
    cin>>datoAbuscar;

    //Mostrar la posicion del arreglo hallado
    /*posicionDes=secuencialDes(Arr,num,datoAbuscar);
    cout<<posicionDes;*/
    posicionOrd=secuencialOrd(Arr,num,datoAbuscar);
    cout<<posicionOrd;

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

int secuencialOrd(int A[100],int n, int dato){
    int pos,i;
    i=0;
    while(i<n && A[i]<dato){
        i=i+1;
    }
    //Si quiero buscar un numero menor no funciona
    if(i>n || A[i]!=dato){
        pos=-i;
    }else{
        pos=i;
    }

    return pos;
}