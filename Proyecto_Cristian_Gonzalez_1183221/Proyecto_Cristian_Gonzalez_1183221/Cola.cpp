#pragma once

#include "Cola.h"
#include <iostream>
#include<string>

using namespace std;

void Cola::EnColar(string item)
{
	Node* Nuevo = new Node();
	Nuevo->data = item;
	if (header == nullptr)
	{
		header = Nuevo;
		cola = Nuevo;
	}
	else
	{
		cola->next = Nuevo;
		cola = Nuevo;
	}
}

string Cola::DesEnColar()
{
	string Retorno = "Vacio";
	if (header != nullptr)
	{
		Retorno = header->data;
		Node* Top = header;
		header = header->next;
		if (header == nullptr)
		{
			cola = nullptr;
		}
		delete(Top);
	}
	return Retorno;
}

int Cola::Tamano()
{
	int Cantidad = 0;
	for (Node* i = header; i != nullptr; i = i->next)
	{
		Cantidad++;
	}
	return Cantidad;
}

bool Cola::ColaVacia()
{
	return header == nullptr;
}

void Cola::Limpiar()
{
	while (!ColaVacia())
	{
		DesEnColar();
	}
}