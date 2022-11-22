#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

double mean(vector<double> data) {
	double sum = 0;
	int count = 0;
	for (double i : data) {
		sum = sum + i;
		count = count + 1;
	}
	return sum/count;
}

double standardDeviation(vector<double> data) {
	double sum = 0;
	for (double i : data) {
		sum = sum + (i-mean(data))*(i-mean(data));
	}
	return sqrt(sum/data.size());
}

int main() {
	vector<double> data{1,1.5,2,2.5,3,3.5,4,4.5,5};
	cout << "Mean: " << mean(data) << endl;
	cout << "Standard Deviation: " << standardDeviation(data) << endl;
}

