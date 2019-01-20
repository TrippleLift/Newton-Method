//slove (x)^(1/3)

#include<iostream>

using namespace std;

double newton(int, int);

int main() {

	int x, y;
	double result;

	cin >> x >> y;

	result = newton(x, y);
	
	cout << result << endl;

	system("pause");
	return 0;
}

double newton(int x, int y)
{
	double temp;
	if (y <= 0)
	{
		return 2.0;
	}
	else
	{
		temp = newton(x, y - 1);
		return temp - (x - temp*temp*temp) / (-3 * temp*temp);
	}
}