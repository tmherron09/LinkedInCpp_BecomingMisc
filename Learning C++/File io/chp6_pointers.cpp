#include <iostream>

using namespace std;


int main()
{
	
	int v1 = 0;
	int v2 = 1;
	int *p1;
	int *p2;
	p1 = &v1;
	cout << v1 << " and pointer is " << *p1 << endl;
	p2 = &v2;
	*p1 = 42;
	
	cout << v1 << " and pointer is " << *p1 << endl;
	cout << v2 << " and pointer is " << *p2 << endl;
	cout << "But the pointer is pointing at " << p1 << endl;
	cout << "But the pointer is pointing at " << p2 << endl;
	
	
}
