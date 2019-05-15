#include <iostream>
#include <string>
using namespace std;


template <class T>
class Array {
	T *ptr;
	T biggest ;
	int size;
public:
	Array(T arr[], int s) { ptr = arr; size = s; }
	void print();
};
template <class T>
void Array <T> ::print() {
	biggest = ptr[0];
	for (int i = 1; i < size; i++) { 
		//cout << ptr[i] << endl; 
		if (ptr[i] > biggest) {
			biggest = ptr[i];
		}
	
	}
	cout << "the biggest element is " << biggest << endl;
}

int main() {
	const int size = 4;
	double ListOf[size] = { -1000, -1000, -300, -44.3 };

	Array<double> first(ListOf, size);
	first.print();

	system("pause");
	return 0;
}