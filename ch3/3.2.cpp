#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<string> data;
	string str;

	cout << "enter data: ";
	while (cin >> str) {
		data.push_back(str);
	}

	sort(data.begin(), data.end());
	int count = 1;

	for (int i = 0; i < data.size() - 1; i++)
	{
		if (i != data.size() - 1 && data[i] == data[i+1]) {
			count++;
		}
		else {
			cout << data[i] << " " << count << " times" << endl;
			count = 1;
			continue;
		}
	}

	return 0;
}