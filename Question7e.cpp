# include<iostream>
# include<stdio.h>
# include<string.h>
using namespace std;
int Strchr(char str[],char c)
{
	int i=0,j=0;
	while(str[i]!=c)
	{
	    i++;
	    if(str[i]=='\0')
	    return -1;
	    return i+1;
}
int main(void)
{
    char str[100],c;
    cout<<"enter a string(max 100 characters)\n";
    cin>>str;
    cout<<"enter a character to find it's first occurance in the string\n";
    cin>>c;
    cout<<"the character is present at position(-1=charaacter not present in the string)- "<<Strchr(str,c);
    return 0;
}
