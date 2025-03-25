
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
using namespace std;

int main(int argc, char** argv) {
    
    ifstream archPla("PlatosOfrecidos.csv",ios::in);
    if(not archPla.is_open()){
        cout<<"ERROR: No se pudo abrir el archivo PlatosOfrecidos.csv"<<endl;
        exit(1);
    }
    
    ifstream archRpt("RepartidoresContratados.csv",ios::in);
    if(not archRpt.is_open()){
        cout<<"ERROR: No se pudo abrir el archivo RepartidoresContratados.csv"<<endl;
        exit(1);
    }
    
    ifstream archOrd("OrdenesDeCompra.csv",ios::in);
    if(not archOrd.is_open()){
        cout<<"ERROR: No se pudo abrir el archivo OrdenesDeCompra.txt"<<endl;
        exit(1);
    }
    
    ofstream archRep("Reporte.csv",ios::out);
    if(not archRep.is_open()){
        cout<<"ERROR: No se pudo abrir el archivo Reporte.txt"<<endl;
        exit(1);
    }
    
    return 0;
}

