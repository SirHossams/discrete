#include <iostream>

using namespace std;

long long int fibo(int n)
{
	long long int F[100]; //need much more space
	F[0]=1;
	F[1]=1;
	for (int i=2;i<=n;i++)
	F[i]=F[i-1]+F[i-2];
	long long int f=F[n];
	return f;
}



int main()
{
	int sele;
	do {
	int n;
	cin >> n;
	cout << fibo(n) << endl;
	cout << "Try Again? 1/0 ";cin >> sele;
	}while(sele==1);
	return 0;
}