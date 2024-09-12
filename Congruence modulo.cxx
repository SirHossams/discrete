#include <iostream>

using namespace std;

int cong(int a,int b,int m) {
	int conds;
	if (m%(a-b)==0)
	conds=1;
	else
	conds=0;
	return conds;
}


int main()
{
	int x,y,m;
	cout << "Insert the two numbers\n";
	cin >> x >> y;
	cout << "Insert modulo ";cin >> m;
	int condsmain=cong(x,y,m);
	if (condsmain==1)
	cout << "True";
	else if(condsmain==0)
	cout << "False";
	return 0;
}