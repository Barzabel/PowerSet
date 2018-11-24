



template<class T>
PowerSet<T>::PowerSet() {
	this->arrlist = new LinkedList2<T>[size];


}


template<class T>
void PowerSet<T>::put( T value) 
{
	size_t i = hash<T>{}(value);
	Node2<T> *H = arrlist[i%this->size].find(value);
	if (H != nullptr)
	{
		return;
	}
	Node2<T> *H1 = new Node2<T>(value);
	arrlist[i%this->size].add_in_tail(H1);

}
template<class T>
void  PowerSet<T>::remove(T value) 
{
	size_t i = hash<T>{}(value);
	arrlist[i%this->size].dell(value);
}

template<class T>
T* PowerSet<T>::getset(int &size) 
{
	T *res = new T[this->getsize()];
	size = 0;
	for (int _i = 0; _i < this->size; _i++)
	{
		Node2<T> *H = arrlist[_i].gethead();

		while (H != nullptr) 
		{
			
			res[size] = H->value;
			
			size++;
			H = H->next;
		}
		
		
	}
	return res;
}


template<class T>
unsigned int PowerSet<T>::getsize() {
	unsigned int res = 0;
	for (int i = 0; i < this->size; i++) 
	{
		res += arrlist[i].getsize();
	}
	return res;
}

template<class T>
PowerSet<T>& PowerSet<T>::intersection(PowerSet<T>&  other) 
{
	PowerSet<T> *a = new PowerSet<T>;
	int i;
	T *p = other.getset(i);
	for(int _i=0;_i<i;_i++)
	{
		if(this->in_set(p[_i]))
		{
			a->put(p[_i]);
		}

	}
	delete[] p;
	return *a;
}

template<class T>
PowerSet<T>& PowerSet<T>::set_union(PowerSet<T>&  other)
{
	PowerSet<T> *a = new PowerSet<T>;
	int i;
	T *p = this->getset(i);
	for (int _i = 0; _i < i; _i++)
	{
		a->put(p[_i]);

	}
	delete[] p;


	
	p = other.getset(i);
	for (int _i = 0; _i < i; _i++)
	{
		if (this->in_set(p[_i])==false)
		{
			a->put(p[_i]);
		}

	}
	delete[] p;
	return *a;
}

template<class T>
PowerSet<T>& PowerSet<T>::difference(PowerSet<T>&  other) 
{
	PowerSet<T> *a = new PowerSet<T>;
	int i;
	T *p =this->getset(i);
	for (int _i = 0; _i < i; _i++)
	{
		if (other.in_set(p[_i])==false)
		{
			a->put(p[_i]);
		}

	}
	delete[] p;
	return *a;


}


template<class T>
bool PowerSet<T>::issubset(PowerSet<T>&  other)
{
	
	int i;
	T *p = other.getset(i);
	for (int _i = 0; _i < i; _i++)
	{
		if (this->in_set(p[_i]) == false)
		{
			return false;
		}

	}
	delete[] p;
	return true;


}





template<class T>
bool PowerSet<T>::in_set(T value)
{
	size_t i = hash<T>{}(value);
	Node2<T> *H = arrlist[i%this->size].find(value);
	if (H != nullptr)
	{
		return true;
	}

	return false;
}


template<class T>
PowerSet<T>::~PowerSet() {

	delete[] this->arrlist;
	
}