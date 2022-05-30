#include<iostream>
using namespace std;
int main()
{
	int n,m;
	int array1[n];
	int array2[m];
	
	cout << "Enter the size of 1st array";
	cin >> n;
	cout << "Enter the size of 2nd array";
	cin >> m;
	cout << "Enter elements of 1st array";
	for(int i =0;i<n;i++)
	cin >> array1[i];
    cout << "Enter elements of 2nd array";
	for(int i =0;i<m;i++)
	cin >> array2[i];
	int s =0;
	for (int i =0;i<n;i++)
	s+=array1[i];
	for(int i =0;i<m;i++)
	s+=array2[i];
	
	cout << s;
	
	return 0;
}
