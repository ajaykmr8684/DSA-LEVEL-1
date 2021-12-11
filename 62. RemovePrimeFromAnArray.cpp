/*
Remove prime elements from an array
*/


#include<iostream>
#include<vector>
using namespace std;


bool isprime(int val)
{
	for (int j = 2; j <= val / 2; j++)
	{
		if (val % j == 0)
		{
			return false;
		}

	}

	return true;

}

void removeprimes(vector<int> v)
{
	for (int i = v.size() - 1; i >= 0; i--)
	{
		if (isprime(v[i]))
		{
			v.erase(v.begin() + i);
		}

	}
	cout << "[";
	for (int i = 0; i < v.size(); i++)
	{

		cout << v[i];
		if (i < v.size() - 1)
			cout << ", ";
	}
	cout << "]";
}
int main()
{
	int n;
	cin >> n;
	vector<int> v(n, 0);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	removeprimes(v);
}



