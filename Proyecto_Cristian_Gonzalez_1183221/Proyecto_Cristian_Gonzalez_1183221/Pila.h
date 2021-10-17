#pragma once
#include <string>
#include<iostream>

using namespace std;
class Pila
{
	struct Node
	{
		string data;
		Node* next;
	};
private:

	Node* header = nullptr;

public:
	void Insertar(string item);
	string Quitar();
	bool PilaVacia();
	void Limpiar();
	int Tamano();
	string Pila::Cima();
};

