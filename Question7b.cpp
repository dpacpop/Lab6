# include<iostream>
# include<stdio.h>
# include<string.h>
using namespace std;
void Strcat(char str1[],char str2[])
{
	char* point;
	char str[200];
	int i=0,j=0;
	while(str1[i]!='\0')
	{
		str[i]=str1[i];
		i++;
	}
	while(str2[j]!='\0')
	{
		str[i]=str2[j];
		i++;
		j++;
	}
	str[i]='\0';
	cout<<"the two strings are\n"<<str1<<"\nand\n"<<str2<<endl;
	cout<<"the string after concatenation is "<<str;
}
int main(void)
{
    char str1[100],str2[100];
    cout << "enter a string(max 100 characters.)\n";
    cin >> str1;
    cout << "enter another string(max 100 characters.)\n";
    cin >> str2;
    Strcat(str1,str2);
    return 0;
}
