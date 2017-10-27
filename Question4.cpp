# include<iostream>
# include<string.h>
using namespace std;
int main()
{
	
	char str[]="Dhairya Patel";
	char* point=str;
	int size=strlen(str);
	int i;
	cout<<"printing string using normal loop method.\n";
	for(i=0;i<size;i++)
	cout<<str[i];
	cout<<"\nprinting the string using pointer.\n";
	for(i=0;i<size;i++)
	cout<<*(point+i);
	return 0;
}
