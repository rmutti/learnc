#include <iostream>

using std::cout;
using std::endl;

class A
{
public:
	A(){cout << "A()"<< endl;}
	~A(){cout << "-A()" << endl;}
	
private:
	void* operator new(size_t size)
	{
		return ::operator new(size);
	}

	void operator delete(void *ptr)
	{
		::operator delete(ptr);
	}

};

int main()
{
	A  a;
}
