# include<iostream>
# include<stdio.h>
# include<string.h>
using namespace std;
int Strstr(char str[],char str1[])
{
	int i,j,k=0;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==str1[0])
		{
			for(j=0;j<strlen(str1);j++)
			{
				if(str[i+j]!=str1[j])
				break;
				if(j==strlen(str1)-1)
				k++;
			}
		}
		if(k==1)
		break;
	}
	if(k==1)
	return i+1;
	else
	return -1;
}
int main(void)
{
    char str[100],str1[100];
    cout<<"enter a string(max 100 characters)\n";
    cin>>str;
	cout<<"enter a string to find it's first occurance in the entered string(less than or equa to 100 characters)\n";
	cin>>str1;
    cout<<"the string is present at position(-1= string is not present)- "<<Strstr(str,str1);
    return 0;
}
