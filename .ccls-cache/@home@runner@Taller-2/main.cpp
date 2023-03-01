//Taller 2 Juan Esteban Rincón
#include <cstdlib>
#include <iostream>
//Estructura para capturar los resultados Max y N
using namespace std;

struct resultados{
  int max_valor;
  int size_array;
  int *int_array;
};

//Declaración función
resultados crearArrayAleat();
//Función principal
int main(){ 
//declaración de variables
resultados numeros;
int op, i, j, e;
bool flag = true;

//Opciones
  cout << " MENÚ " << endl;
  cout << "Opc 0: Para salir del programa" << endl;
  cout << "Opc 1: Para crear un vector aleatorio" << endl;
  cout << "Opc 2: Para imprimir la matriz histograma" << endl;
//cuerpo del programa
 while(flag){
  cin >> op;
  switch(op){
    case 0:
      cout << "Fin del programa" << endl;
      return 0;
    break;
    case 1:
      numeros = crearArrayAleat(); //ejecución función, determinar el máximo
      numeros.max_valor = numeros.int_array[0];
      for(i = 0; i < numeros.size_array; i++){
        if(numeros.max_valor < numeros.int_array[i]){
          numeros.max_valor = numeros.int_array[i];
        }
      }
      cout<<endl;
      cout << "Máximo: " << numeros.max_valor << endl;
      cout << "Size: " << numeros.size_array << endl;
     break;
    case 2: //Impresión de posición, datos e histograma
      cout << "# \tDato \t \t Histograma\n";
          for(i = 0; i < numeros.size_array;           i++){
                cout << i;
                cout << "\t";
                cout << numeros.int_array[i] <<" \t";
                cout << " \t";
            for(e = 1; e <= numeros.int_array[i]; e++){
              cout << ".";
            }
                cout << endl;
            }
     break;
    //Opción de reserva en caso de entrada de datos errónea
    default:
    cout <<"Ingrese opcion valida"<<endl;
    break;
    }
  }
  return 0;
 }

resultados crearArrayAleat(){
    resultados res;
  cout << "Ingrese el tamaño del vector: ";
  cin >> res.size_array;
  res.int_array = new int [res.size_array];
  for (int i = 0; i<res.size_array; i++){
    *(res.int_array+i) = (rand() % 21);
    cout << *(res.int_array+i) << " ";
  }
  return res;
}