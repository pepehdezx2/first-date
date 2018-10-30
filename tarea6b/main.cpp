//
//  main.cpp
//  tarea6b
//  A01381334
//  Created by Jose Antonio Hernández on 21/10/17.
//  Copyright © 2017 Jose Antonio. All rights reserved.
//
// casos de prueba
// dia 14 mes 12 año 1997 , dia 11 mes 6 año 1999, dia 21 mes 8 año 2001
// debe mostrar 14 12 1997
#include <iostream>
#include <string>
using namespace std;

void fechaMenor(int day[], int month[], int year[], int tam){
    //Declaracion de variables
    int minDay = 0, minMonth = 0, minYear = 0;
    //Encontrar el anio menor
    for(int i = 0; i < tam; i++){
        if(year[i] < minYear)
            minYear = year[i];
    }
    //Encotrar el mes menor
    for(int i = 0 ; i < tam; i++){
        if(year[i] == minYear){
            if(month[i] < minMonth)
                minMonth = month[i];
        }
    }
    //Encontrar el dia menor
    for(int i = 0; i < tam ; i ++){
        if(year[i] == minYear && month[i] == minMonth){
            if(day[i]<minDay)
                minDay = day[i];
        }
    }
    //Desplegar resultados
    cout << "La fecha menor es: " << minDay << "/" << minMonth << "/" << minYear << endl;
}

int main(int argc, const char * argv[]) {
    //Declaracion de variables
    int tam = 3;
    int day[tam], month[tam], year[tam];
    
    //Lenar las fechas
    for(int i = 0; i < tam; i++){
        cin >> day[i] >> month[i] >> year[i];
    }
    //Llamar la funcion para que nos de la fecha menor
    fechaMenor(day, month, year, tam);
    
    return 0;
}
