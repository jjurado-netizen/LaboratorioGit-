#include<iostream>
#include<vector>
#include<cmath>
#include<sstream>
#include<string>
#include<fstream>

using namespace std;
int main(){
    ifstream archivoEntrada(" input/archivoEntrada.txt");

    if(archivoEntrada.is_open()){
        cout<<"Archivo abierto"<<endl;
        string linea;

        while(getline(archivoEntrada, linea)){
            
        }
    }
    return 0;
}