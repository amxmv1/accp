#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	//name
	cout << "enter your name: ";
	string name;
	cin >> name;
	cout << "hello " << name << endl;

	//marks
	cout << "midterm "
		    "and final: ";
	double midterm, final;
	cin >> midterm >> final;

	cout << "all marks: ";

	double x;
	vector<double> homework;

	while (cin >> x) {
		homework.push_back(x);
	}

	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();

	if (size == 0) {
		cout << endl << "try again" << endl;
		return 1;
	}

	sort(homework.begin(), homework.end());

	vec_sz mid = size / 2;
	double median;
	median = size % 2 == 0 ? (homework[mid] + homework[mid-1]) / 2
		                   : homework[mid];

	streamsize prec = cout.precision();
	cout << "your grade is " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * median
		<< setprecision(prec) << endl;
	return 0;
}