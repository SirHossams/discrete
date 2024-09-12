#include <iostream>

using namespace std;

int fibo(int n)
{
	if (n==0)
	return 0;
	else if (n==1)
	return 1;
	else
	return fibo(n-1)+fibo(n-2);
}


int main()
{
	int sele;
	do {
	int n;
	cin >> n;
	cout << fibo(n) << endl;
	cout << "Try Again? 1/0  ";cin >> sele;
	}while(sele==1);
	return 0;
}