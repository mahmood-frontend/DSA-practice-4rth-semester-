#include<iostream>
#include<vector>
using namespace std;
int main()
{
	
	int n;
	cout<<"enter the number of students "<<endl;
	cin>>n;
	vector <int> p(n);
	cout<<"enter the marks of "<<n<<" students "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	
	for(int i=0;i<n;i++)
	{
		if(p[i]==-1)
		{
			p.erase(p.begin()+i);
		}
	}
	cout<<"marks after deletion "<<endl;
	for(int i=0;i<n;i++)
	{
		
		cout<<p[i]<<" ";
	}
}
