#include <iostream>
using namespace std;

int main()
{

	int videos[10];
	int i;
	int n;
	int mais = 0;
	int menos = 0;

	cin >> n;

	for(i = 0; i < n; i++)
	{
		cin >> videos[i];
	}

	for(i = 0; i < n; i++)
	{
		if(videos[i] < 10000000)
			menos++;
		else
			mais++;
	}

	cout << mais << " video(s) com mais de 10M views" << endl;
	cout << menos << " video(s) com menos de 10M views" << endl;

	return 0;
}
