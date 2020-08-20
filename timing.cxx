#include <iostream>
using namespace std;


#include <thrust/reduce.h>
#include <thrust/sequence.h>
#include <thrust/host_vector.h>
#include <thrust/device_vector.h>

auto noThrustValue() {
	const int N = 5000000;

	vector<int> a(N);

	for( int i =0;i < N; ++i )
		a[i] = i;
	
	int sumA = 0;
	for( int i =0;i < N; ++i )
		sumA += a[i];
	
	int sumCheck = 0;
	for( int i =0;i < N; ++i )
		sumCheck += i;
	
	if( sumA == sumCheck )
		cout << "Test Succeeded!" << endl;
	
	else {
		cerr << "Test FAILED!" << endl;
		return false;
	}

	return true;
}

auto Thrust() {
}

int main() {

	auto noThrustValue = noThrust();
	auto ThrustValue = Thrust();
	return 0;
}
