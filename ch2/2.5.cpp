#include <iostream>
#include <string>
using namespace std;

int main()
{
	int size = 5;
	string str;
	//square
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
			cout << '*';
		cout << endl;
	}
	cout << endl;
	
	//rectangle
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size + 5; j++)
			cout << '*';
		cout << endl;
	}
	cout << endl;

	//triangle
	for (int i = 0; i < size; i++) {
		for (int j = 0; j <= i; j++)
			cout << '*';
		cout << endl;
	}
}