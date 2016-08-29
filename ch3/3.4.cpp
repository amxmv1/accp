#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<string> names;
	string str;
	vector<double> grades;

	while (cin >> str) {
		cout << "your name: ";
		names.push_back(str);

		double midterm, final;
		double x;
		vector<double> homework;
		cout << "midterm and final: ";
		cin >> midterm >> final;
		cout << "homework: ";
		
		cin >> x;
		homework.push_back(x);

		typedef vector<double>::size_type vec_sz;
		vec_sz size = homework.size();

		if (size == 0) {
			cout << endl << "try again" << endl;
			return 1;
		}

		sort(homework.begin(), homework.end());

		vec_sz mid = size / 2;
		double median;
		median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2
							   : homework[mid];

		double final_grade = 0.2 * midterm + 0.4 * final + 0.4 * median;

		grades.push_back(final_grade);
	}

	for (size_t i = 0; i < names.size(); i++)
		cout << names[i] << ' ' << grades[i] << endl;
	return 0;
}