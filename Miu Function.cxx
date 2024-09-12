#include <iostream>

using namespace std;

int miu(int n)
{
	if (n==1)
	return 1;
	int A[100];int c=0;
	for (int i=2;i<=n;i++)
	if (n%i==0) {
	A[c]=i;
	c++;
	}
	int d=0;int C[c];
	for (int i=0;i<c;i++) {
		bool conds=1;
		for (int j=2;j<A[i];j++)
		if (A[i]%j==0)
		conds=0;
	if (conds==1) {
	C[d]=A[i];
	d++;
	}
    }
    int t=0;int P[c];int sum=0;
    for (int i=0;i<d;i++) {
    while (n%C[i]==0) {
    	n/=C[i];
    	t++;
    }
    P[i]=t;
    sum+=P[i];
    t=0;
    }
    for (int i=0;i<d;i++)
    if (P[i]>1)
    return 0;
    if (sum==d)
    return pow(-1,d);
}




int main()
{
	int n;
	cin >> n;
	cout << miu(n) << endl;
	return 0;
}