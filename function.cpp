#include<iostream>
using namespace std;


int factOfNum(int num) {
	int fact=1;
	for(int i=1;i<=num;++i)
	{
		fact *= i;
	}
	return fact;
}

	int main () {
    int result=	factOfNum(5);
	cout<<"Factorial "<<result<<endl;	
	return 0;

	
	
}