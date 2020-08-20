#include <iostream>
#include <vector>
using namespace std;


bool noThrustValue() {
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

int main() {
	bool isEqual = noThrustValue();
	
	return isEqual ? 0 : 1;
}
