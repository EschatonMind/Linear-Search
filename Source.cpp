#include <iostream>
using namespace std;
int ReturnPos(int a[], int &n, int &k);
int main() {

	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	int Key;
	cin >> Key;
	int pos = ReturnPos(a, n, Key);
	if (pos == -1) {
		cout << " No such value founded";
	}
	else
	{
		cout << "Key found at index " << pos;
	}
	return 0;
}

int ReturnPos(int a[], int &n, int &k) {

	for (int i = 0; i < n; i++) {
		if (a[i] == k) { return i; }
	}
	return -1;
}