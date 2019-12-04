#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;

int main(){
	string lines[20];
	int array[20][20];
	ifstream file("array");
	int i = 0;
	string str;
	while (getline(file, str))
	{
		lines[i] = str;
		i++;
	}
	for (int i=0;i<20;i++)
	{
		vector<int> vect;
		stringstream ss(lines[i]);
	    	for (int i; ss >> i;) {
			vect.push_back(i);
			if (ss.peek() == ',')
		    	ss.ignore();
	    	}
	    	for (std::size_t j = 0; j < vect.size(); j++){
			array[i][j] = vect[j];
		}

	}
	for (int j=0;j<=19;j++)
	{
		for (int i=0;i<=19;i++)
		{
			cout << array[j][i] << "	";
		}
		cout << ";" << "\n";
	}
	cout << "\n";

	int product = 1;
	int highest_product = 0;
	int highesti;
	int highestj;
	string direction;
	int num = 0;

	for (int j=0;j<=16;j++)
	{
		for (int i=0;i<=18;i++)
		{
			product = 1;
			for (int k=0;k<=3;k++){
				product = product * array[j+k][i];
			}
			if (i == 18 && j == 16) {
				//cout << "Columns:	" << product << "\n";
			}
			if (product > highest_product) {
				direction = "down";
				cout << num << ": " << "i:	" << i << "	" << "j:	" << j << "	"<< direction << "		" << product << "\n";
				num++;
				highest_product = product;
				highesti = i;
				highestj = j;
			}
		}
	}

	for (int j=0;j<=16;j++)
	{
		for (int i=0;i<=16;i++)
		{
			product = 1;
			for (int k=0;k<=3;k++){
				product = product * array[j+k][i+k];
			}
			if (i == 8 && j == 6) {
				//cout << array[j][i] << "\n";
				//cout << "Right-Down:	" << product << "\n";
			}
			if (product > highest_product) {
				direction = "right-down";
				cout << num << ": " << "i:	" << i << "	" << "j:	" << j << "	"<< direction << "	" << product << "\n";
				num++;
				highest_product = product;
				highesti = i;
				highestj = j;
			}
		}
	}

	for (int j=0;j<=16;j++)
	{
		for (int i=3;i<=18;i++)
		{
			product = 1;
			for (int k=0;k<=3;k++){
				product = product * array[j+k][i-k];
			}
			if (i == 3 && j ==16) {
				//cout << "Left-Down:	" << product << "\n";
			}
			if (product > highest_product) {
				direction = "left-down";
				cout << num << ": " << "i:	" << i << "	" << "j:	" << j << "	"<< direction << "	" << product << "\n";
				num++;
				highest_product = product;
				highesti = i;
				highestj = j;
			}
		}
	}

	for (int j=0;j<=18;j++)
	{
		for (int i=0;i<=16;i++)
		{
			product = 1;
			for (int k=0;k<=3;k++){
				product = product * array[j][i+k];
			}
			if (i == 16 && j == 18) {
				//cout << "Rows:		" << product << "\n";
			}
			if (product > highest_product) {
				direction = "right";
				cout << num << ": " << "i:	" << i << "	" << "j:	" << j << "	"<< direction << "	" << product << "\n";
				num++;
				highest_product = product;
				highesti = i;
				highestj = j;
			}
		}
	}
	cout << "\n" << "i: " << highesti << "	j: " << highestj;
	cout << "	" << direction << "\n";
	cout << "\n" << "Highest Product: " << highest_product << "\n";
	cout << "Maximum Product: " << "96059601" << "\n";
	cout << "Highest Int:	 " <<  "2147483647";
	return 0;
}
