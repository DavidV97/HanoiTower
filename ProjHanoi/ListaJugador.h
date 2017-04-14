#ifndef LISTAJUGADOR_H
#define LISTAJUGADOR_H
#include "NodoJugadores.h"
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class ListaJugador {
public:
	ListaJugador();
	void setLongitud();
	int getLongitud();
	void setCabeza(NodoJugadores*);
	NodoJugadores *getCabeza();

	void agregarJugador(Jugador pjugador);
	bool ListjugadoresVacio();
	string mostrarJugadores();
	string buscarInfoDelJugador(string pcodigo);
	Jugador buscarJugador(string pjugador);
	bool seEncuentraJugador(string pcodigo);
	string toUppercase(string pcodigo);
private:
	int longitud;
	NodoJugadores *cabeza;
};
#endif // !LISTAJUGADOR_H
