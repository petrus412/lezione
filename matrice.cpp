#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int matrice[5][6];
	int copia[5][6];
	ofstream outfile;
	outfile.open("matrice.txt");
	
	for (int i = 0; i < 5; i++)
	{
		for (int x = 0; x < 6; x++)
		{
				matrice[i][x] = x;
				outfile << x<<" ";
		}
		outfile << endl;
	}
	outfile.close();
	ifstream infile;
	infile.open("matrice.txt");
	for (int i = 0; i < 5; i++)
	{
		for (int x = 0; x < 6; x++)
		{
			infile >> copia[i][x];
		}
	}
	infile.close();
	for (int i = 0; i < 5; i++)
	{
		for (int x = 0; x < 6; x++)
		{
			cout<<copia[i][x]<<" ";
		}
		cout << "\n";
	}
}