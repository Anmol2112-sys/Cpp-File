#include<iostream>
using namespace std;
int Fibonacci (int n) {
	if(n==1|| n==0)
	{
		return n;
	}
	else{
		return Fibonacci(n-1) + Fibonacci(n-2);
	}
}
	int main ()
	{
		int n;
		cout<<" Enter the terms:";
		cin>>n;
		for(int i=0;i<n;i++){
			cout<< Fibonacci(i)<< " ";
		}
		return 0;
	

	
}