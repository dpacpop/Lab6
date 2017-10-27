# include<iostream>
# include<stdio.h>
# include<string.h>
using namespace std;
int Strchr(char str[],char c)
{
	int i=0;
	while(str[i]!=c)
	i++;
	return (i+1);
}
int main(void)
{
    char str[100],c;
    cout<<"enter a string(max 100 characters)\n";
    cin>>str;
	cout<<"enter a character to find it's first occurance in the string\n";
	cin>>c;
    cout<<"the character is present at position- "<<Strchr(str,c);
    return 0;
}
