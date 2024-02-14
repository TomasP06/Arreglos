#include <iostream>
using namespace std;

int main(){
    int row;
    int col;
    string nombre;

    cout<<"Ingrese numero de filas: ";
    cin>>row;
    cout<<"ingrese numero de columnas: ";
    cin>>col;

    string matriz2[row][col];

    for(int i=0; i<row; i++){
        for(int j=0;j<col;j++){
            cout<<"Digite nombre y precio del producto: \n";
            cin>>matriz2[i][j];   
        }   
    };

    for(int m=0; m<row; m++){
        for(int n=0; n<col;n++){
            cout<<matriz2[m][n];
        }
    }
    return 0;
}