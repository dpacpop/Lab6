# include<iostream>
# include<stdio.h>
# include<string.h>
using namespace std;
void Strcpy(char str[],char str1[])
{
	str1= str;
	cout<<"implementing strcpy.\n";
	cout<<"the original string is"<<str<<endl;
	cout<<"the new string is "<<str1<<endl;
}
int main(void)
{
    char str[100], *p;
    cout << "enter a string(max 100 characters.)\n";
    cin >> str;
    char str1[100];
    Strcpy(str,str1);
    return 0;
}
