# include<iostream>
# include<stdio.h>
# include<string.h>
using namespace std;
int main(void)
{
    char str[20], *p;
    cout << "Input about 10 characters of string\n";
    cin >> str;
    p=str;
    int i;
    for(i=0;i<10;i++)
    cout<<(p+i)<<endl;
    return 0;
}
