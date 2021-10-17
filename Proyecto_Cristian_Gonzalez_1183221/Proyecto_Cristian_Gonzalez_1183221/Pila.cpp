#pragma once
#include "Pila.h"
#include <iostream>
#include<string>

using namespace std;

void Pila::Insertar(string item)
{
	Node* Nuevo = new Node();
	Nuevo->data = item;
	Nuevo->next = header;
	header = Nuevo;
}
string Pila::Quitar()
{
	if (header == nullptr)
	{
		return "No value";
	}
	string Retorno = header->data;
	Node* Top = header;
	header = header->next;
	delete(Top);
	return Retorno;
}
bool Pila::PilaVacia()
{
	if (header == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void Pila::Limpiar()
{
	while (!PilaVacia())
	{
		Quitar();
	}
}
int Pila::Tamano()
{
	int Cantidad = 0;
	for (Node* i = header; i != nullptr; i = i->next)
	{
		Cantidad++;
	}
	return Cantidad;
}
string Pila::Cima()
{
	if (Tamano() == 0)
	{
		return "Vacio";
	}
	return header->data;
}
