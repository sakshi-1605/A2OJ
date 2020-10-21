#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector <int> v;
	string str;
	cin>>str;
	int l=str.size();
	for(int i=0;i<l;i++)
	{
		if(str[i]!='+')
		{
			v.push_back(str[i]-48);
		}
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	{
		if(i==v.size()-1)
		cout<<v[i];
		else 
		cout<<v[i]<<"+";
	}
}
