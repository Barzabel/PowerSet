#pragma once
#ifndef _Node2_
#define _Node2_
#include <string>

template<class T>
class Node2 {
public:
	
	Node2(T value);
	Node2() :value(NULL), next(nullptr), prev(nullptr) {

	}
	T value;
	std::string key;
	Node2<T>* next;
	Node2<T>* prev;
	
	T getval() ;




private:

};
#include"Node2.ipp"

#endif // !_Node2_
