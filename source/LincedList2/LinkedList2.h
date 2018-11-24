#pragma once
#ifndef _Link_
#define _Link_


#include "Node2.h"


using namespace std;


template<class T>
class  LinkedList2 {
public:
	LinkedList2();
	void add_in_position(Node2<T>*position, Node2<T>*val);
	


	void add_in_tail(Node2<T>*val);
	


	void add_in_head(Node2<T>*val);
	

	Node2<T>* find(T val);

	Node2<T>* findkey(std::string key);

	void dell(T val);

	void printn();
	
	void deltail();
	void delhead();

	void printe();

	unsigned int getsize();


	Node2<T>* gethead();

	Node2<T>* gettail();
	
	~LinkedList2();



private:
	Node2<T>*head;
	Node2<T>*tail;
	unsigned int count;
};



#include"LinkedList2.ipp"



#endif // !_Link_
