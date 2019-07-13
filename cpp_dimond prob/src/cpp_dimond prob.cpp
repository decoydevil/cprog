//============================================================================
// Name        : cpp_dimond.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
//#pragma
using namespace std;
namespace ndiamond
{

class A
{
public:
	int a;
public:
	void print()
	{
		cout<<"this->a="<<this->a<<"\t"<<endl<<&this->a<<endl;
	}
	A()
	{
		this->a=10;
		cout<<"inside parameterless ctor="<<this->a<<"\t"<<endl<<&this->a<<endl;
	}
	A(int x)
		{
			this->a=x;
			cout<<"inside parameterized ctor="<<this->a<<"\t"<<endl<<&this->a<<endl;
		}

	~A()
		{
			this->a=0;
			cout<<"inside parameterless dtor="<<this->a<<"\t"<<endl<<&this->a<<endl;

			cout<<"==========================="<<endl;
		}

}; // end of class A

/*
class B
{int a

}; // end of class B
*/
} // end of namespace ndimond

using namespace ndiamond;

int main()
{
	A obj(100);
	//obj.a=1;
	obj.print();

	return 0;

}
