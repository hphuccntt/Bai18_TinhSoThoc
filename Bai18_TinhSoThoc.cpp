#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	int o;
	double tongthoc = 0;
	cout << "Tinh so thoc tren ban:\n ";
	cout << "so o: "; cin >> o; cout << endl;
	for (int i = 0; i < o; i++)
	{
		tongthoc = tongthoc + pow(2, i);
		cout << "o thu " << i + 1 <<" co so thoc la: " << pow(2, i) << " hat thoc" << endl;
	}
	cout << "tong so thoc " << tongthoc << endl;
	return 0;
}