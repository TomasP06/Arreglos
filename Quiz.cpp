/*1. crear 2 vectores de n cantidad de numeros que el usuario diligencie.
sumar los valores diligenciados en cada vector. Y comparar los valores (decir si son iguales o no)*/
#include <iostream>
using namespace std;

int main(){
    int cant1;
    int cant2;
    int conta1=0;
    int conta2=0;

    cout<<"Ingrese la cantidad de numeros para el primer vector: "<<endl;
    cin>>cant1;
    cout<<"Ingrese la cantidad de numeros para el segundo vector: "<<endl;
    cin>>cant2;

    int vector1 [cant1];
    int vector2 [cant2];

    for(int i=0; i<cant1;i++){
        cout<<"ingrese los datos del primer vector: "<<endl;
        cin>>vector1[i];   
    };
    for(int i=0; i<cant2;i++){
        cout<<"ingrese los datos del segundo vector: "<<endl;
        cin>>vector2[i];   
    };
    for(int i=0; i<cant2;i++){  
        conta1+=vector1[i];
    };

    cout<<"la suma del vector 1 es de: "<<conta1<<endl;
    
    for(int i=0; i<cant2;i++){  
        conta2+=vector2[i];
    };
    cout<<"la suma del vector 2 es de: "<<conta2<<endl;

    if(conta1==conta2){
        cout<<"La suma de sus datos son iguales";
    }
    else{
        cout<<"La suma no es igual";
    }
    return 0;
}


/*2. Crear un vector de n posiciones, simulando el juego de buscaminas. Al final debe mostrar cuants minas hay */

    