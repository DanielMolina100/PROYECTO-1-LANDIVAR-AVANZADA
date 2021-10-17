#include "List.h"
#include "Canciones.h"
void List::Insert(String^ artista, String^ cancion, int visualizaciones)
{
	Canciones^ New = gcnew Canciones();
	New->Artista = artista;
	New->Nombre_cancion = cancion;
	New->Visualizaciones = visualizaciones;
	New->Next = Head;
	Head = New;
	if (Tail == nullptr)
		Tail = New;
	length++;
}

bool List::Insert(String^ artista, String^ cancion, int visualizaciones, int index)
{
	if (Head == nullptr || index == 0)
	{
		Insert(artista, cancion, visualizaciones);
		return true;
	}
	int i = 0;
	Canciones^ Current = Head;
	while (i < (index - 1) && Current != nullptr)
	{
		Current = Current->Next;
		i++;
	}
	if (Current == nullptr)
		return false;
	Canciones^ New = gcnew Canciones();
	New->Artista = artista;
	New->Nombre_cancion = cancion;
	New->Visualizaciones = visualizaciones;
	New->Next = Current->Next;
	Current->Next = New;
	length++;
}

String^ List::Print()
{
	String^ res = nullptr;
	Canciones^ Current;
	Current = Head;
	while (Current != nullptr)
	{
		res += Current->Artista + "\t" + Current->Nombre_cancion + "\t" + Current->Visualizaciones.ToString() + "\n";
		Current = Current->Next;
	}
	return res;
}

String^ List::GetNombre(int index)
{
	Canciones^ Current = Head;
	int Retorno = 0;
	while (Current != nullptr && Retorno < index)
	{
		Current = Current->Next;
		Retorno++;
	}
	return Current->Artista;
}

String^ List::GetNombre2(int index)
{
	Canciones^ Current = Head;
	int Retorno = 0;
	while (Current != nullptr && Retorno < index)
	{
		Current = Current->Next;
		Retorno++;
	}
	return Current->Nombre_cancion;
}

int List::GetVisualizaciones(int index)
{
	Canciones^ Current = Head;
	int Retorno = 0;
	while (Current != nullptr && Retorno < index)
	{
		Current = Current->Next;
		Retorno++;
	}
	return Current->Visualizaciones;
}
void List::DeleteIndex(List^ Lista)
{
	int index;
	if (index == 0)
	{
		Canciones^ ToDelete = Head;
		Head = Head->Next;
		delete ToDelete;

	}
	else
	{
		Canciones^ Anterior = Head;
		int i = 0;
		while (i < index - 1)
		{
			Anterior = Anterior->Next;
			i++;
		}
		Canciones^ ToDelete = Anterior->Next;
		Anterior->Next = ToDelete->Next;
		delete  ToDelete;

	}
	length--;
	
}


int List::Search(int numero)
{
	int index = 0;
	Canciones^ Current = Head;
	while (Current->Visualizaciones != numero && Current != nullptr)
	{
		Current = Current->Next;
		index++;
	}
	if (Current == nullptr)
		return -1;
	else
		return index;
}
bool List::IsSorted()
{
	bool Sorted = true;
	Canciones^ Current = Head;
	while (Current != nullptr && Current->Next != nullptr)
	{
		if (Current->Visualizaciones >= Current->Next->Visualizaciones)
			Sorted = false;
		Current = Current->Next;
	}
	return Sorted;
}
