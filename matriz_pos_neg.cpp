#include <iostream>

using namespace std;

void solicitarDatos(int *numero, int ROWS, int COLS){//Función para solicitar los datos para llenar a la matriz
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "[" << i << "][" << j << "]: ";
            cin >> *(numero+i*COLS+j);
        }
    }
}

void separarNumeros(int *numero, int ROWS, int COLS, int *pos, int *neg){ //Función para seleccionar y separar los numeros negativos 
                                                                            // y positivos
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            
            if(*(numero+i*COLS+j)>=0){
                *pos = *pos +1;
            }else{
                *neg = *neg +1;
            }
        }
    }
}

int main(){
    int filas=3, columnas=3, positivo=0, negativo=0;
    
    cout<<"\nHola, a continuaci"<<char(162)<<"n rellena la matriz 3x3"<<endl;

    // Crear matriz y llenar
    cout << "\nIngresa los datos para llenar la matriz:"<<endl;
    int numero[filas][columnas];
        solicitarDatos(*numero, filas, columnas);

    // Verificando si son numeros positivos o negativos
    int matriz[filas][columnas];
        separarNumeros(*numero, filas, columnas, &positivo, &negativo);
   
    // Mostrar resultado
    cout << "N"<<char(163)<<"meros positivos:\t"<< positivo <<endl;
    cout << "N"<<char(163)<<"meros negativos:\t"<< negativo <<endl;

    return 0;
    system("PAUSE");
}