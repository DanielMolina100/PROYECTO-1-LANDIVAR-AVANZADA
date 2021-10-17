#pragma once
#include "Nodo.h"
using namespace System;
ref class Canciones
{
public:
	String^ Artista;
	String^ Nombre_cancion;
	int Visualizaciones;
	Canciones^ Next;

};
