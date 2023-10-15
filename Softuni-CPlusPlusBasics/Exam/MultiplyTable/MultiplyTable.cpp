#include <iostream>

using namespace std;

int main()
{
    int number,n1=0,n2=0,n3=0,result=0;

    cin >> number;

	n1 = number / 100;
	n1 = n1 % 10;
	n2 = number / 10;
	n2 = n2 % 10;
	n3 = number % 10;
	
	for (int i1 = 1; i1 <= n3; i1++)
	{
		for (int i2 = 1; i2 <= n2; i2++)
		{
			for (int i3 = 1; i3 <= n1; i3++)
			{
				result = i1 * i2 * i3;
				cout << i1 << " * " << i2 << " * " << i3 << " = " << result <<";" << endl;
			}
		}
	}
}
