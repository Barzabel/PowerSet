#pragma once





	template<class T>
	Node2<T>::Node2(T value) :value(value),next(nullptr), prev(nullptr)
	{
		

		
	}


	template<class T>
	T Node2<T>::getval()  {
		return this->value;
	}



