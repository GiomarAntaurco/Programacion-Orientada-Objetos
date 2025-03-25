

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
using namespace std;
#include "AperturaDeArchivos.h"

void AperturaDeUnArchivoDeTextosParaLeer(ifstream &arch,const char *nombArch){
    arch.open(nombArch,ios::in);
    if(not arch.is_open()){
        cout<<"ERROR: No se pudo abrir el archivo "<<nombArch<<endl;
        exit(1);
    }
}

void AperturaDeUnArchivoDeTextosParaEscribir(ifstream &archRep,
        const char *nombArch){
    archRep.open(nombArch,ios::out);
    if(not archRep.is_open()){
        cout<<"ERROR: No se pudo abrir el archivo "<<nombArch<<endl;
        exit(1);
    }
}