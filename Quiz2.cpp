/*2. Crear un vector de n posiciones, simulando el juego de buscaminas. Al final debe mostrar cuants minas hay */

#include <iostream>
using namespace std;

int main(){
    int cantidad;
    int minas=0;

    cout<<"Cuantas posiciones? "<<endl;
    cin>>cantidad;

    int buscaMinas [cantidad];

    for(int i=0;i<cantidad;i++){
        cout<<"Ingrese 1 para mina, 0 para libre: "<<endl;
        cin>>buscaMinas[i];
        if (buscaMinas[i]==1){
            minas+=1;
        }
    }
    
    cout<<"La cantidad de minas son: "<<minas;
    return 0;

}