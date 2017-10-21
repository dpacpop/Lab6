# include<iostream>
using namespace std;
int main()
{
	int a,b;
	int* p;
	p=&a;
	b=*p;
	a=2;
	b=3;
	cout<<"a= "<<a<<"\nb= "<<b<<"\n*p= "<<*p<<endl;
	p=&b;
	cout<<"a= "<<a<<"\nb= "<<b<<"\n*p= "<<*p<<endl;
	return 0;
}
