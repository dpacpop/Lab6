# include<iostream>
using namespace std;
int main()
{
	int arr[10],i;
	int* point;
	for(i=0;i<10;i++)
	arr[i]=i+1;
	point=arr;
	cout<<"printing using normal indexing method.\n";
	for(i=0;i<10;i++)
	cout<<arr[i]<<endl;
	cout<<"printing using pointer method.\n";
	for(i=0;i<10;i++)
	cout<<*(point+i)<<endl;
}
