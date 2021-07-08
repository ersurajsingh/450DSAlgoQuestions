#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { 10, 4, 5, 8, 6, 11, 26 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int k=4;
	set<int> s(arr,arr+n);
	set<int>::iterator itr=s.begin();
	advance(itr=k-1);
	cout << *itr << "\n";
	return 0;
}
