#include <iostream>

using namespace std;


bool perfect(int n)
{
	int c=0;
	int A[1000];
	bool conds=0;
	//check for divisibility
	for (int i=1;i<n;i++)
	if (n%i==0) {
		A[c]=i;//store the values
		c++;
	}
	
	//main topic
	int sum=0;
	for (int i=0;i<c;i++)
	sum+=A[i];
	if (sum==n)
	return true;
	else
	return false;
}



int main()
{
	int n;
	cin >> n;
	cout << perfect(n);
	return 0;
}