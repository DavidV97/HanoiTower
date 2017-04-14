#include "Gestor.h"

Gestor::Gestor() {}

void Gestor::agregarJugador(string pnombre) {
	Jugador jugador(pnombre);
	listaJugadores.agregarJugador(jugador);
}

string Gestor::mostrarJugadores() {

	return listaJugadores.mostrarJugadores();
}

string Gestor::buscarJugador(string pcodigo)
{
	return listaJugadores.buscarInfoDelJugador(pcodigo);
}


bool Gestor::validarSiHayJugadores()
{
	return listaJugadores.ListjugadoresVacio();
}

Jugador Gestor::encontrarObjJugador()
{
	return Jugador();
}
