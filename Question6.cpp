# include<iostream>
# include<stdio.h>
# include<string.h>
using namespace std;
int main(void)
{
    char str[20], *p;
    cout << "Input 10 characters in the string\n";
    cin >> str;
    p=str;
    int i;
    for(i=9;i>=0;i--)
    cout<<(p+i)<<endl;
    return 0;
}
