#pragma once
#ifndef _DICT_
#define _DICT_


#include"LincedList2/LinkedList2.h"




template<class T>
class PowerSet {
public:
	PowerSet();
	void put( T value);
	void remove(T value);




	T* getset(int &i);

	unsigned int getsize();
	bool in_set(T value);
	PowerSet<T>& intersection(PowerSet<T>&  other);
	PowerSet<T>& set_union(PowerSet<T>&  other);


	PowerSet<T>&difference(PowerSet<T>&  other);

	bool issubset(PowerSet<T>&  other);


	~PowerSet();
private:
    LinkedList2<T> *arrlist;
	int size=1000;
};


#include"PowerSet.ipp"

#endif // !_DICT_