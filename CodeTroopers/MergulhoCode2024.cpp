#include <iostream>
using namespace std;

int main ()
{

	bool retornou [10005] = {};
	int n, r, aux;

	while(cin >> n >> r)
	{
		for (int i = 0; i < r; i++)
		{
			cin >> aux;
			retornou[aux - 1] = true;
		}

		if (n == r)
		{
			cout << "*" << endl;
		}

		else
		{

			for (int i = 0; i < n; i++)
			{
				if (retornou[i] == false)
				{
					cout << i + 1 << " ";
				}
			}
			cout << endl;
		}
	}
	return 0;
}
