#include <iostream>
using namespace std;

#include <thrust/reduce.h>
#include <thrust/sequence.h>
#include <thrust/host_vector.h>
#include <thrust/device_vector.h>

bool summation() {
	const int N = 5000000;

	// Create the array
	thrust::device_vector<int> a(N);

	// Fill the array
	thrust::sequence( a.begin(), a.end(), 0);
	
	// Calculate the sum of the Array
	int sumA = thrust::reduce( a.begin(), a.end(), 0);
	
	int sumCheck = 0;
	for( int i =0;i < n; ++i )
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
