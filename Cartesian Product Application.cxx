#include <iostream>
#include <conio.h>

using namespace std;


int main()
{
	int sele;
	do {
	int n;
	cout << "Insert the maximum value of the given arrays\n";
	cin >> n;
	int x_1[n];
	int x_2[n];
	// the user enters the values of these arrays
	cout << "Enter the values of the first array\n";
	for (int i_1=0;i_1<n;i_1++) {
		cin >> x_1[i_1];
	}
	cout << "Enter the values of the second array\n";
	for (int j_1=0;j_1<n;j_1++) {
		cin >> x_2[j_1];
	}
	// the nested loop satisfies the condition of cross multiplication
	// the program prints the required ordered pairs
	cout << "{" << endl;
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			cout << "(" << x_1[i] << "," << x_2[j] << ") ";
			if (j==n-1)
			cout << endl;
			else
			cout << " , ";
		}
	}
	cout << "}\n" << "Try Again? ";cin >> sele;}while(sele==1);
	return 0;
}