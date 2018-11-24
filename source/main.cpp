#include<iostream>

#include"PowerSet.h"

#include<string>

using namespace std;



int main() {
	PowerSet<int>a;
	PowerSet<int>b;
	a.put(4);
	a.put(3);
	a.put(5);

	b.put(3);
	//b.put(4);
	b.put(5);

	PowerSet<int>c=a.difference(b);
	
	int i;

	int *p = c.getset(i);
	for (int _i = 0; _i < i; _i++) {
		cout << p[_i]<<endl;
	}
	
	cout << a.issubset(b);
	return 0;
}