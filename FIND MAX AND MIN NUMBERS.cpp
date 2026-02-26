#include<iostream>
using namespace std;
void display(int *p,int n)
{
	cout<<"marks present in the array "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<p[i]<<" ";
	}
	cout<<endl;
}
void highest(int* p,int n)
{
	int value = p[0];
	for(int i=0;i<n;i++)
	{
		if(p[i]>value)
		{
			value = p[i];
		}
	}
	
	cout<<"highest marks: "<<value<<endl;
}
void lowest(int* p,int n)
{
	int value = p[0];
	for(int i=0;i<n;i++)
	{
		if(p[i]<value)
		{
			value = p[i];
		}
	}
	
	cout<<"lowest marks: "<<value<<endl;
}
int main()
{
	int n;
	cout<<"enter the number of students "<<endl;
	cin>>n;
	int *p = new int[n];
	cout<<"enter the marks of "<<n<<" students "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	display(p,n);
	highest(p,n);
	lowest(p,n);
	delete p;
}
