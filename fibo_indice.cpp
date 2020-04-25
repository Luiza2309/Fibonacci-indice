#include<iostream>
using namespace std;
unsigned long long fibo()
{
	unsigned long long a=0, b=1, c;
	unsigned long long i=1;
	while(true)
	{
		c=a+b;
		if(c<b) return i;
		a=b;
		b=c;
		i++;
	}
}
int main()
{
	cout<<fibo()<<'\n';
}
