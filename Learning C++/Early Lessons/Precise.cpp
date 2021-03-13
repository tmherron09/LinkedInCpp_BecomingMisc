#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	float manyDecimals = 5.1234567890;
//	
//	cout << "Normally it looks like this " << manyDecimals << endl;
//	cout << "But let's set precision to 3 and we get " << setprecision(3) << manyDecimals << endl;
//	
//	 manyDecimals = 15.1234567890;
//	
//	cout << "Normally it looks like this " << manyDecimals << endl;
//	cout << "But let's set precision to 3 and we get " << setprecision(3) << manyDecimals << endl;
//	
//	cout << "-----------------------------------\n";
//	cout << "After formatting.\n\n";
	// format output
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	
	
	manyDecimals = 5.1234567890;
	
	cout << "Normally it looks like this " << manyDecimals << endl;
	cout << "But let's set precision to 4 and we get " << setprecision(4) << manyDecimals << endl;
	
	manyDecimals = 15.1234567890;
	
	
	cout << "Normally it looks like this " << manyDecimals << endl;
	cout << "But let's set precision to 4 and we get " << setprecision(4) << manyDecimals << endl;
	
}
