#pragma once
#include <string>
#include<iostream>

using namespace std;
class Cola
{
	struct Node
	{
		string data;
		Node* next;
	};
private:
	Node* header;
	Node* cola;
public:
	void EnColar(string item);
	string DesEnColar();
	int Tamano();
	bool ColaVacia();
	void Limpiar();
};