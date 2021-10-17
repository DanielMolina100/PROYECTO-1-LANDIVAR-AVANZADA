#pragma once
#include "Canciones.h"
#include <string>
#pragma once
using namespace System;
ref class List
{
	Canciones^ Head;
	Canciones^ Tail;
public:

	int length;
	void Insert(String^ artista, String^ cancion, int visualizaciones);
	bool Insert(String^ artista, String^ cancion, int visualizaciones, int index);
	String^ Print();
	String^ GetNombre(int index);
	String^ GetNombre2(int index);
	int GetVisualizaciones(int index);
	int Search(int value);
	void DeleteIndex(List^ Lista);
	bool IsSorted();

};

