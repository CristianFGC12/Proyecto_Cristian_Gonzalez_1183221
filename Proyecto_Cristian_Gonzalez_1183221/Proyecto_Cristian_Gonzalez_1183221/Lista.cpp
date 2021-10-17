#include "Lista.h"
#include <string>
#include<iostream>

using namespace std;

void Lista::Add(string item)
{
	Node* Nuevo = new Node();
	Nuevo->data = item;
	Nuevo->next = header;
	header = Nuevo;
}
int Lista::IndexOf(string item)
{
	int count = 0;
	for (Node* indice = header; indice != nullptr; indice = indice->next)
	{
		if (indice->data == item)
		{
			return count;
		}
		count++;
	}
	return -1;
}
string Lista::GetItem(int index)
{
	Node* Actual = header;
	if (index == 0)
	{
		return header->data;
	}
	else
	{
		Node* Anterior = header;
		for (int i = 0; i < index - 1; i++)
		{
			Anterior = Actual;
			Actual = Actual->next;
		}
		//		Anterior->next = Actual->next;
		return Actual->data;
	}

}
void Lista::RemoveAt(int index)
{
	Node* Actual;
	Node* Anterior = nullptr;
	Actual = header;

	for (int i = 0; i < index - 1; i++)
	{
		Anterior = Actual;
		Actual = Actual->next;
	}
	if (Anterior == nullptr)
	{
		header = header->next;

	}
	else
	{
		Anterior->next = Actual->next;

	}

}
int Lista::Count()
{
	int count = 0;
	for (Node* indice = header; indice != nullptr; indice = indice->next)
	{
		count++;
	}
	return count;
}