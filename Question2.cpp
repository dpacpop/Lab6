# include<iostream>
using namespace std;
int main()
{
	int a,b;
	int* p;
	p=&a;
	b=*p;
	cout<<"enter the values of a & b.\n";
	cin>>a>>b;
	cout<<"a= "<<a<<"\nb= "<<b<<"\n*p= "<<*p<<endl;
	a=2;
	b=3;
	cout<<"a= "<<a<<"\nb= "<<b<<"\n*p= "<<*p<<endl;
	p=&b;
	cout<<"a= "<<a<<"\nb= "<<b<<"\n*p= "<<*p<<endl;
	return 0;
}
