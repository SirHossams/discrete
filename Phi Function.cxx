#include <iostream>

using namespace std;

int gcd(int a,int b)
{
	int r;
	do {
		r=a%b;
		a=b;
		b=r;
	}while(r!=0);
	return a;
}

int phi(int n)
{
	int c=0;
	for (int i=0;i<n;i++)
	     if (gcd(i,n)==1)
	     c++;
	return c;
}




int main()
{
	int sele;
	do {
	int n;
	cin >> n;
	cout << phi(n) << endl;
	cout << "Try Again? 1/0 ";cin >> sele;
	}while(sele==1);
	return 0;
}

//best case is omega(n)
//worst case is O(n^2)