#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<string> data;
	string str;

	cout << "enter data: ";
	while (cin >> str) {
		data.push_back(str);
	}

	string::size_type max = 0, min = str.max_size();

	for (string::size_type i = 0; i < data.size(); i++)
	{
		if (data[i].length() > max) {
			max = data[i].length();
		}

		if (data[i].length() < min) {
			min = data[i].length();
		}
	}

	cout << min << ' ' << max;

	return 0;
}