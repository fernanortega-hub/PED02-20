#include<iostream>

using namespace std;

void recibir(float *puntero, float promedio){ //Función para recibir arreglo en forma de puntero
    *puntero = *puntero +*(puntero+1)+*(puntero+2)+*(puntero+3)+*(puntero+4);

    promedio = *puntero/5;
    cout<< "\nPromedio: "<<promedio<<endl;
    if (promedio<6){
        cout<<"El estudiante REPROBO el ciclo."<<endl;
    } else if (promedio>=6) {
         cout<<"El estudiante APROBO el ciclo."<<endl;
    }
}

int main (){
    float notas[5], promedio, puntero;

    cout << "\nIntroduzca las 5 notas del estudiante UCA: " <<endl;

    for (int i = 0; i < 5; i++){
        puntero=0;
        cout << "\nIntroduce una calificaci"<<char(162)<<"n: ";//Llenando el arreglo
           cin >> notas[i];
           puntero=notas[i];//Dando al puntero los valores del arreglo
    }
    recibir(&puntero,promedio);
    
    system("PAUSE");
    return 0;
}
