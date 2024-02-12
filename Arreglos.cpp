#include <iostream>
using namespace std;


int main(){
    /*string names [5]={"Gabriela","Juan","Ivan","Laura","Samuel"};
    string nombres_nuevos [3];
    for(int i=0; i<3; i++){
    cout<<"Ingrese el nombre: ";
    cin>>nombres_nuevos[i];
    }
    for(int i=0;i<nombres_nuevos->length();i++){
    cout<<nombres_nuevos[i]<<endl;
    }
    return 0;
}
*/

    int cantidad;
    cout<<"Cuantas frutas? ";
    cin>>cantidad;
    string frutas [cantidad];
    for(int i=0; i<cantidad;i++){
    cout<<"Ingrese las frutas";
    cin>>frutas[i];
    }
    for(int i =0; i<frutas->length(),i++){
    cout<<frutas[i]<<endl;
    }

    return 0;
}