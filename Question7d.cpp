# include<iostream>
# include<stdio.h>
# include<string.h>
using namespace std;
int Strcmp(char str1[],char str2[])
{
	if(strlen(str1)>strlen(str2))
	return 1;
	else if(strlen(str1)<strlen(str2))
	return -1;
	else if(strlen(str1)==strlen(str2))
	return 0;
}
int main(void)
{
    char str1[100],str2[100];
    cout<< "enter string 1(max 100 characters)\n";
    cin>>str1;
    cout<<"enter string 2(max 100 characters)\n";
    cin>>str2;
    if(Strcmp(str1,str2)==0)
    cout<<"both strings are of equal length";
    else if(Strcmp(str1,str2)<0)
    cout<<"string 2 > string 1";
    else if(Strcmp(str1,str2)>0)
    cout<<"string 1 > string 2";
    return 0;
}
