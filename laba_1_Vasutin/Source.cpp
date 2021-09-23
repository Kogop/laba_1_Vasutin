#include <iostream>

using namespace std;


int Red(int x) {
	
	return (pow(2, x) - 1);
	
}





int main() {
	while (true)
	{
		int red = 0, green = 0;
		int x = 0;

		cin >> x;
		if (x == 0)
		{
			break;
		}

		//x = 4;

		/*for (int i = 1; i <= x; i++)
		{
			red += Red(i);
		}*/
		red = Red(x);
		green = x;

		cout << red << " Red" << endl;
		cout << green << " Green" << endl;

	}
	return 1;
}