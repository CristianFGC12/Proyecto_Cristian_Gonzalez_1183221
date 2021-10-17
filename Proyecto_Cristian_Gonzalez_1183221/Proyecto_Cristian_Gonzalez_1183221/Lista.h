#pragma once
#include <string>
#include<iostream>

using namespace std;

class Lista
{

	struct Node
	{
		/// <summary>
		/// Información a almacenar
		/// </summary>
		string data;

		Node* next;
	};
private:

	Node* header = nullptr;
public:

	void Add(string item);
	int IndexOf(string item);
	string GetItem(int index);
	void RemoveAt(int index);
	int Count();
};

