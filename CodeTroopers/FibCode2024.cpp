#include <iostream>
using namespace std;

int main()
{

	int t;
	int n;
	long long int fib[65];

	cin >> t;

	fib[0] = 0;
	fib[1] = 1;

	while (t--)
	{

		cin >> n;

		cout << "Fib(" << n << ") = ";

		for (int j = 2; j <= n; j++)
		{
			fib[j] = fib[j - 2] + fib[j - 1];
		}
		cout << fib[n] << endl;
	}

	return 0;
}
