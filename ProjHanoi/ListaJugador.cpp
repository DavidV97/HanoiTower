#include "ListaJugador.h"
#include <sstream>
#include <iostream>
using namespace std;

ListaJugador::ListaJugador() {
	longitud = 0;
	cabeza = NULL;
}
void ListaJugador::setLongitud() {
	longitud++;
}

int ListaJugador::getLongitud() {
	return longitud;
}

void ListaJugador::setCabeza(NodoJugadores *pcabeza) {
	cabeza = pcabeza;
}

NodoJugadores * ListaJugador::getCabeza() {
	return cabeza;
}
void ListaJugador::agregarJugador(Jugador pjugador) {
	NodoJugadores* nodo = new NodoJugadores(pjugador);
	if (ListjugadoresVacio()) {
		setCabeza(nodo);
	}
	else {
		nodo->setSig(cabeza);
		setCabeza(nodo);
	}
	this->longitud++;
}
bool ListaJugador::ListjugadoresVacio()
{
	if (cabeza == NULL) {
		return true;
	}

	return false;
}

string ListaJugador::mostrarJugadores() {
	string resul = "";
	NodoJugadores* auxJugador;
	auxJugador = this->cabeza;
	while (auxJugador != NULL) {
		resul += auxJugador->toString() + "\n";
		auxJugador = auxJugador->getSig();
	}
	return resul;
}
string ListaJugador::buscarInfoDelJugador(string pcodigo) {
	string resul;
	NodoJugadores* auxJugador;
	auxJugador = cabeza;
	Jugador jugador = auxJugador->getJugador();
	string codigo = toUppercase(jugador.getCodigo());
	pcodigo = toUppercase(pcodigo);
	while (auxJugador != NULL) {
		if (codigo == pcodigo) {
			resul = "El jugador se encontro sastisfactoriamente \n " + auxJugador->toString() + "\n";
			auxJugador = NULL;
		}
		else {
			resul = "El jugador que busco no se encuentra registrado!";
			auxJugador = auxJugador->getSig();
			if (auxJugador != NULL) {
				jugador = auxJugador->getJugador();
				codigo = toUppercase(jugador.getCodigo());
			}

		}

	}

	return resul;
}
Jugador ListaJugador::buscarJugador(string pcodigo) {
	NodoJugadores* auxJugador;
	auxJugador = cabeza;
	Jugador jugador = auxJugador->getJugador();
	Jugador jugadorEncontrado;
	string codigo = jugador.getCodigo();
	codigo = toUppercase(codigo);
	pcodigo = toUppercase(pcodigo);
	while (auxJugador != NULL) {
		if (codigo == pcodigo) {
			jugadorEncontrado = auxJugador->getJugador();
			auxJugador = NULL;
		}
		else {
			auxJugador = auxJugador->getSig();
			if (auxJugador != NULL) {
				jugador = auxJugador->getJugador();
				codigo = toUppercase(jugador.getCodigo());

			}
		}
	}
	return jugadorEncontrado;
}
bool ListaJugador::seEncuentraJugador(string pcodigo) {
	bool resul = false;
	NodoJugadores* auxJugador;
	auxJugador = cabeza;
	Jugador jugador = auxJugador->getJugador();
	Jugador jugadorEncontrado;
	string codigo = jugador.getCodigo();
	codigo = toUppercase(codigo);
	pcodigo = toUppercase(pcodigo);
	while (auxJugador != NULL) {
		if (codigo == pcodigo) {
			auxJugador = NULL;
			return true;
		}
		else {
			auxJugador = auxJugador->getSig();
			if (auxJugador != NULL) {
				jugador = auxJugador->getJugador();
			}
		}
	}
	return resul;
}
string ListaJugador::toUppercase(string pcodigo) {
	std::transform(pcodigo.begin(), pcodigo.end(), pcodigo.begin(), ::toupper);
	return pcodigo;
}