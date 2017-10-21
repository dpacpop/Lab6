# include<iostream>
using namespace std;
int main()
{
	int a;int* pa;
	double b;double* pb;
	float c;float* pc;
	bool d;bool* pd;
	char e;char* pe;
	cout<<"the size of int is "<<sizeof(a)<<" and the size of int pointer is "<<sizeof(pa)<<endl;
	cout<<"the size of double is "<<sizeof(b)<<" and the size of double pointer is "<<sizeof(pb)<<endl;
	cout<<"the size of float is "<<sizeof(c)<<" and the size of float pointer is "<<sizeof(pc)<<endl;
	cout<<"the size of bool is "<<sizeof(d)<<" and the size of bool pointer is "<<sizeof(pd)<<endl;
	cout<<"the size of char is "<<sizeof(e)<<" and the size of char pointer is "<<sizeof(pe)<<endl;
}
