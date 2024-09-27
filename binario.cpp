#include <iostream>
using namespace std;

int binario(int [100],int, int);
int main(){
    int num,datoBus, Arr[100],bin;
    cout<<"Ingrese la cantidad de elementos del arreglo: ";
    cin>>num;

    cout<<"Ingrese los elementos del arreglo: ";
    for(int i=0; i<num; i++){
        cin>>Arr[i];
    }

    cout<<"Ingrese el dato a buscar: ";
    cin>>datoBus;

    bin = binario(Arr, num, datoBus);

    cout<<bin;

return 0;
}


int binario(int A[100], int n, int dato){
    int izq,der,m,pos;
    //Cuando el numero a insertar esta antes del primer numero te bota una posicion incorrecta 
    izq=0;
    der=n-1;
    bool cen=false;

    while(izq<der && cen==0){
        m=int ((izq+der)/2);
        if (A[m]==dato){
            cen=1;
        }else{
            if(A[m]<dato)
                izq=m+1;
            else
                der=m-1;
        };
    }

    if(cen==true){
        pos=m;
    }else{
        pos=-izq;
    }

    return pos;
}