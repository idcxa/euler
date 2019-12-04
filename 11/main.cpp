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

	int product;
	int highest_product;
	int highesti;
	int highestj;
	for (int j=0;j<=16;j++)
	{
		for (int i=0;i<=19;i++)
		{
			product = 1;
			for (int k=0;k<=3;k++){
				product = product * array[j+k][i];
			}
			if (i == 19 && j == 16) {
				cout << product << "\n";
			}
		}
		if (product > highest_product) {
			highest_product = product;
			highesti = i;
			highestj = j;
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
				cout << array[j][i] << "\n";
				cout << product << "\n";
			}
		}
		if (product > highest_product) {
			highest_product = product;
			highesti = i;
			highestj = j;
		}
	}

	for (int j=0;j<=16;j++)
	{
		for (int i=3;i<=19;i++)
		{
			product = 1;
			for (int k=0;k<=3;k++){
				product = product * array[j+k][i-k];
			}
			if (i == 19 && j == 16) {
				cout << product << "\n";
			}
		}
		if (product > highest_product) {
			highest_product = product;
			highesti = i;
			highestj = j;
		}
	}

	for (int j=0;j<=19;j++)
	{
		for (int i=0;i<=16;i++)
		{
			product = 1;
			for (int k=0;k<=3;k++){
				product = product * array[j][i+k];
			}
			if (i == 16 && j == 19) {
				cout << product << "\n";
			}
		}
		if (product > highest_product) {
			highest_product = product;
			highesti = i;
			highestj = j;
		}
	}
	cout << "\n" << "i: " << highesti << "	j: " << highestj;
	cout << "\n" << "Highest Product: " << highest_product << "\n";
	cout << "Maximum Product: " << "96059601" << "\n";
	cout << "Highest Int:	 " <<  "2147483647";
	return 0;
}

			//for (int k=0;k<4;k++){
			//	int x = i+k;
			//	int y = i+k;
			//	if (x > 19 || y > 19 || x < 0 || y < 0) {
			//		product = 0;
			//	} else {
			//		product = product * array[i+k][j+k];
			//	}
			//}
			//if (product > highest_product) {
			//	highest_product = product;
			//	cout << i << j << ": down right" << "\n";
			//}
			//cout << product << "\n";

			//product = 1;
			//for (int k=0;k<4;k++){
			//	int x = i;
			//	int y = i+k;
			//	if (x > 19 || y > 19 || x < 0 || y < 0) {
			//		product = 0;
			//	} else {
			//	product = product * array[i][j+k];
			//	}
			//}
			//if (product > highest_product) {
			//	highest_product = product;
			//	cout << i << j << ": right" << "\n";
			//}
			//cout << product << "\n";

			//product = 1;
			//for (int k=0;k<4;k++){
			//	int x = i-k;
			//	int y = i+k;
			//	if (x > 19 || y > 19 || x < 0 || y < 0) {
			//		product = 0;
			//	} else {
			//	product = product * array[i-k][j+k];
			//	}
			//}
			//if (product > highest_product) {
			//	highest_product = product;
			//	cout << i << j << ": up right" << "\n";
			//}
			//cout << product << "\n";

			//product = 1;
			//for (int k=0;k<4;k++){
			//	int x = i+k;
			//	int y = i;
			//	if (x > 19 || y > 19 || x < 0 || y < 0) {
			//		product = 0;
			//	} else {
			//	product = product * array[i+k][j];
			//	}
			//}
			//if (product > highest_product) {
			//	highest_product = product;
			//	cout << i << j << ": down" << "\n";
			//}
			//cout << product << "\n";

			//product = 1;
			//for (int k=0;k<4;k++){
			//	int x = i-k;
			//	int y = j;
			//	if (x > 19 || y > 19 || x < 0 || y < 0) {
			//		product = 0;
			//	} else {
			//	product = product * array[i-k][j];
			//	}
			//}
			//if (product > highest_product) {
			//	highest_product = product;
			//	cout << i << j << ": up" << "\n";
			//}
			//cout << product << "\n";

			//product = 1;
			//for (int k=0;k<4;k++){
			//	int x = i+k;
			//	int y = i-k;
			//	if (x > 19 || y > 19 || x < 0 || y < 0) {
			//		product = 0;
			//	} else {
			//	product = product * array[i+k][j-k];
			//	}
			//}
 			//if (product > highest_product) {
			//	highest_product = product;
			//	cout << i << j << ": down left" << "\n";
			//}
			//cout << product << "\n";

			//product = 1;
			//for (int k=0;k<4;k++){
			//	int x = i;
			//	int y = i-k;
			//	if (x > 19 || y > 19 || x < 0 || y < 0) {
			//		product = 0;
			//	} else {
			//	product = product * array[i][j-k];
			//	}
			//}
			//if (product > highest_product) {
			//	highest_product = product;
			//	cout << i << j << ": left" << "\n";
			//}
			//cout << product << "\n";

			//product = 1;
			//for (int k=0;k<4;k++){
			//	int x = i-k;
			//	int y = i-k;
			//	if (x > 19 || y > 19 || x < 0 || y < 0) {
			//		product = 0;
			//	} else {
			//	product = product * array[i-k][j-k];
			//	}
			//}
			//if (product > highest_product) {
			//	highest_product = product;
			//	cout << i << j << ": up left" << "\n";
			//}
			//cout << product << "\n";
