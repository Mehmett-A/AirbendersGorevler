#include <iostream>
#include <vector>
using namespace std;

template <class X>
vector<vector<X>> create_matrix(X x, int rows, int columns) {
	vector<vector<X>> y(rows, vector<X> (columns,4));
	for (int i = 0; i<rows; i++) {	
		for (int j = 0; j < columns; j++) {
			y[i][j] = x;
			cout << y[i][j] << " ";
		}
		cout << "\n";
	}

	return y;	
}

int main() {
	create_matrix(5,3,4);
}
