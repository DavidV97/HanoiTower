#ifndef GESTOR_H
#define GESTOR_H
#include "ListaJugadores.h"
#include "ListaPuntos.h"
#include <iostream>
#include <string> 

using namespace std;

class Gestor {
public:
	Gestor();
	void agregarJugador(string pnombre);
	string mostrarJugadores();
	string buscarJugador(string pcodigo);
	bool validarSiHayJugadores();
	Jugador encontrarObjJugador();
private:
	ListaJugadores listaJugadores;
	Jugador jugador;
	/*ListaPuntos listaPuntos;
	ListaEstXCurso listaEstXCurso;
	string generateStrMatricula(Curso curso, Estudiante estudiante); */
};
#endif // !GESTOR_H