#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int o;
	double tongthoc = 0;
	cout << "Tinh so thoc tren ban:\n ";
	cout << "so o: "; cin >> o; cout << endl;
	cout.imbue(locale("en_US.UTF-8"));
	if (o > 64)
	{
		cout << "Tren ban chi co 64 o, vui long nhap so <=64\n ";
		system("pause");
		return 0;
	}
	
	for (int i = 0; i < o; i++)
	{
		tongthoc = tongthoc + pow(2, i);
		cout << "o thu " << i + 1 <<" co so thoc la:\t\t "<< fixed << setprecision(0) << pow(2, i) << " hat thoc" << endl;
	}
	cout << "tong so thoc: " << tongthoc << " hat thoc " << endl;
	cout << " Tong so thoc la: " << fixed << setprecision(0) << tongthoc << " hat thoc\n ";
	return 0;



}