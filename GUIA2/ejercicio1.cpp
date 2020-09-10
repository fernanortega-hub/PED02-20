#include <iostream>
#include <string>

using namespace std;

struct Estudiante{
    string nombre;
    string apellido;
    string estado = "Indefinido";
    float notas[];
};

struct Estudiante estudiante;

void ingresarDatos();
void ingresarNotas(int);
float Sumarpromedio (int);
string verificarEstado(float);


int main () {
    int n;

    cout << "Ingrese la cantidad de notas: ";
    cin >> n;

    estudiante.notas[n];

    float promedio = Sumarpromedio(n);
    ingresarDatos();
    ingresarNotas(n);
    estudiante.estado = verificarEstado(promedio);

    cout << "\n\nDATOS DEL ESTUDIANTE:\n\n";

        cout << "Nombre del estudiante: " << estudiante.nombre << endl;
        cout << "Apellido del estudiante: " << estudiante.apellido << endl;
        cout << "El estudiante" << " est" << char(160) <<" "<< estudiante.estado << " con un promedio de " << Sumarpromedio(n);
    return 0;
}

void ingresarDatos(){

    fflush (stdin);

    cout << "\nIngrese el nombre del estudiante: ";
    getline(cin,estudiante.nombre);
    fflush (stdin);

    cout << "\nIngrese el apellido del estudiante: ";
    getline(cin,estudiante.apellido);
    fflush (stdin);

}

void ingresarNotas(int n){
    float promedio = 0, suma = 0;
    cout << "\n\nIngrese las notas del estudiante: " << endl;
    
    for (int i = 0; i < n; i++){

        cout << "Nota " << i+1 << ": ";
        cin >> estudiante.notas[i];
    }
}

float Sumarpromedio (int n){
    float suma = 0, promedio = 0;

    for (int i=0; i < n; i++){
        suma+=estudiante.notas[i];
    }

    promedio = suma / n;
    return promedio;
}

string verificarEstado(float promedio){

    if(promedio <= 6 ){
        return "aprobado";
    } else {
        return "reprobado";
    }
}