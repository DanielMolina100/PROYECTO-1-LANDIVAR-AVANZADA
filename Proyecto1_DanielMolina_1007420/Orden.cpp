#include "Orden.h"
#include "Canciones.h"
#include "List.h"

using namespace System;

void Orden::Swap(List^ Lista, int i, int j)
{
	if (i != j)
	{
		String^ nom = Lista->GetNombre(i);
		String^ nom2 = Lista->GetNombre(j);
		String^ num = Lista->GetNombre2(i);
		String^ num2 = Lista->GetNombre(j);
		int view = Lista->GetVisualizaciones(i);
		int view2 = Lista->GetVisualizaciones(j);
		Lista->DeleteIndex(Lista);
		Lista->Insert(nom2, num2, view2, i);
		Lista->DeleteIndex(Lista);
		Lista->Insert(nom, num, view, j);
	}
}

void Orden::BubbleSort(List^ Lista)
{
	int i;
	int indiceIntercambio;
	i = (Lista->length) - 1;
	while (i > 0)
	{
		indiceIntercambio = 0;
		for (int j = 0; j < i; j++)
		{
			if (Lista->GetVisualizaciones(j + 1) < Lista->GetVisualizaciones(j))
			{
				Swap(Lista, j, j + 1);
				indiceIntercambio = j;
			}
		}
		i = indiceIntercambio;
	}
}
void Orden::ReproducirRola(List^ Lista) {

}

