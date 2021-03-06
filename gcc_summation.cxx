#include <iostream>
#include <vector>
using namespace std;


bool summation() {
	const int N = 5000000;

	// Create the array
	vector<int> a(N);

	// Fill the array
	for( int i =0;i < N; ++i )
		a[i] = i;
	
	// Calculate the sum of the Array
	int sumA = 0;
	for( int i =0;i < N; ++i )
		sumA += a[i];
	
	int sumCheck = 0;
	for( int i =0;i < N; ++i )
		sumCheck += i;
	
	// Check results agree
	if( sumA == sumCheck )
		cout << "Test Succeeded!" << endl;
	
	else {
		cerr << "Test FAILED!" << endl;
		return false;
	}

	return true;
}

int main() {
	bool summedCorrect = summation();
	
	return summedCorrect ? 0 : 1;
}
