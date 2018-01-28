#pragma once

typedef int Rank;
#define DEFAULT_CAPACITY 3

template < typename T> 
class Vector
{
protected :
	Rank _size;
	int _capacity;
	T* _elem;
	void copyFrom (T const * A, int lo, int hi);
	void expand();
	void shrink();
	bool bubble ( Rank lo, Rank hi);
	void bubbleSort(Rank lo,Rank hi)
	Rank max (Rank lo, Rank hi);
	void selectionSort (Rank lo,Rank hi);
	void merge( Rank lo, Rank mi, Rank hi);
	void mergeSort(Rank lo, Rank hi);
	Rank partition ( Rank lo, Rank hi);
	void quickSort ( Rank lo, Rank hi);
	void heapSort ( Rank lo, Rank hi);
public:
	Vector(int c = DEFAULT_CAPACITY, int s = 0, T v = 0){ //容量 c,规模 s,初始值 v
		_elem = new T[c = _capacity]; for(_size = 0; _size < s;_elem[_size++] = v);
	}
	Vector(T const * A, Rank n){ copyFrom(A,0,n); }
	Vector(T const * A, Rank lo,Rank hi){ copyFrom(A,lo,hi); }
	Vector(T Vector< T > const & V) { copyFrom(V._elem,0,V._size); }
	Vector(T Vector< T >const & V,Rank lo, Rank hi) { copyFrom(V._elem,lo,hi);}

	~Vector(void);
};

