#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

double median(vector<double> vec)
{
	typedef vector<double>::size_type vec_sz;

	vec_sz size = vec.size();
	if (size == 0) 
		throw domain_error("Median of an empty vector");
	
	sort(vec.begin(), vec.end());

	vec_sz mid = size / 2;

	return size % 2 == 0 ? (vec[mid] + vec[mid - 1]) / 2
						 : vec[mid];
}

double grade(double midterm, double final, double homework)
{
	return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

double grade(double midterm, double final, const vector<double>& hw)
{
	if (hw.size() == 0)
		throw domain_error("student didn't do any homework");

	return 0.2 * midterm + 0.4 * final + 0.4 * median(hw);
}

istream& read_hw(istream& in, vector<double>& hw)
{
	if (in) {
		hw.clear();

		double x;
		while (in >> x)
			hw.push_back(x);

		in.clear();
	}
	return in;
}

int main()
{
	string name;

	cout << "your name: ";

	double midterm, final;
	vector<double> homework;

	cout << "midterm and final: ";
	cin >> midterm >> final;
		
	cout << "homework: ";
	read_hw(cin, homework);
	try {
		double final_grade = grade(midterm, final, homework);
		streamsize prec = cout.precision();
		cout << "your grade: " << setprecision(3)
			<< final_grade << setprecision(prec) << endl;
	}
	catch (domain_error) {
		cout << endl << "try again" << endl;
		return 1;
	}
	
	return 0;
}