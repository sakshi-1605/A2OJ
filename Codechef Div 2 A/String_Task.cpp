#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	getline(cin,str);
	int l=str.size();
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	for(int i=0;i<l;i++)
	{
		if(str[i]!='a' && str[i]!='e' && str[i]!='o' && str[i]!='i' && str[i]!='u')
		{
			cout<<"."<<str[i];
		}
	}
}
