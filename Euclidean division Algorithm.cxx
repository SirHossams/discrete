#include <iostream>

using namespace std;

int ho(int a,int b)
{
	int q,r;
	do {
    q=a/b;
    r=a%b;
    a=b;
    b=r;
	}while(r!=0);
	return a;
}

int main()
{
	int sele;
	do {
	int x,y;
	cout << "Insert the value of the two numbers\n";
	cin >> x >> y;
	if (x>y)
	cout << "The GCD is " << ho(x,y) << endl;
	else if (y>x)
	cout << "The GCD is " << ho(y,x) << endl;
	cout << "Try Again? (1/0) ";cin >> sele;}while(sele==1);
	return 0;
}