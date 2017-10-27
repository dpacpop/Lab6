# include<iostream>
# include<stdio.h>
# include<string.h>
using namespace std;
void Strlen(char str[])
{
	int i=0,length=0;
	while(str[i]!='\0')
	{
		length++;
		i++;
	}
	cout<<"the length of the string is "<<length;
}
int main(void)
{
    char str[100];
    cout << "enter a string(max 100 characters.)\n";
    cin >> str;
    Strlen(str);
    return 0;
}
