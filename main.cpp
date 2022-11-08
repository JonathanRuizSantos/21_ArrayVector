#include <iostream>

/* 
Sintaxis de declaracion de un array unidimencional: --> tipoDeDato nombreVector[tamanio]
*/
using namespace std;
int main(int argc, char** argv) {
	// declaracion de vectores
	int numPares[5];
	float promedios[5];
	double dimensiones[5];
	string nombres[5];
	char letra[5];
	bool estado[5];
	
	// inicializacion de vectores, forma 1
	int enteros[5] = {1,2,3,4,5};
	//       posicion 0 1 2 3 4
	
	// inicializacion de vectores, forma 2
	string alumnos[5];
	alumnos[0] = "David";
	alumnos[1] = "Lucas";
	alumnos[2] = "Javier";
	alumnos[3] = "Andrea";
	alumnos[4] = "Laura";
	
	// particularidades, inicializacion incompleta pero correcta
	int edades[5] = {15,10};
	
	// particularidades, inicialicacion sin declarar tamanio de vector
	float calificaciones[] = {5.8,7.6,8.8};
	//               posicion 0    1    2
	
	// Leyendo un elemento contenido en el vector
	float calPos1 = calificaciones[1]; // calPos1 = 7.6
	string alumnoPos3 = alumnos[3]; // alumnoPos3 = Andrea
	cout<<"calPos1 = "<<calPos1<<endl;
	cout<<"alumnoPos3 = "<<alumnoPos3<<endl<<endl;
	
	// recorriendo los elementos de un vector
	string aux;
	for(int i = 0; i<5; i++){
		aux = alumnos[i];
		cout<<i<<".- "<<alumnos[i]<<endl;
	}
	return 0;
}