#include <iostream>

using namespace std;


int main()
{
	int x,y;
	char s;
	bool conds;
	int sele;
	do {
	cin >> x >> s >> y;
	if (s=='|')  {
	if (y%x==0)
	conds=1;
	else if (y%x!=0)
	conds=0;
	}
	conds?cout << "True\n":cout << "False\n";
	cout << "Try Again? "; cin >> sele;}while (sele==1);
	return 0;
}