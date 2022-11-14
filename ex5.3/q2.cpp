#include <iostream>
using namespace std;
int main()
{
	int positiveInt;
	int sum=1;
	int total=0;
	cout << "enter a positive integer ; ";
	cin >> positiveInt;
	for (sum = 1; sum <= positiveInt; sum++)
	{
		total = total + sum;
	}
	cout <<"sum of the positive integer from 1 is : " << total << endl;
	return 0;
}