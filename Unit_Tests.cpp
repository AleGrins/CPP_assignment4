#include <iostream>
#include "CircularInt.hpp"
using namespace std;

int main() {
	CircularInt A {1, 12};
	cout << A << endl;	// 1
	cout << "lower: " << A.getLower() << " value: " << A.getValue() << " upper: " << A.getUpper() << endl;	//1, 1, 12 
	
	++A;
	cout << A << endl; //2
	
	A++;
	cout << A << endl; //3
	
	--A;
	cout << A << endl; //2
	
	A--;
	A--;
	cout << A << endl; //12 (loop)
	
	A.setValue(2);
	cout << -A << endl; //10
	cout << A << endl; //2
	
	CircularInt B {2, 12};
	bool compare = A == B;
	cout << compare << endl; //1 (true)
	
	B.setValue(6);
	compare = A == B;
	cout << compare << endl; //0 (false)
	
	compare = A != B;
	cout << compare << endl; //1 (true)
	
	compare = A > B;
	cout << compare << endl; //0 (false)
	
	compare = A < B;
	cout << compare << endl; //1 (true)
	
	compare = A >= B;
	cout << compare << endl; //0 (false)
	
	compare = A <= B;
	cout << compare << endl; //1 (true)
	
	A += 4; cout << A << endl; //6
	A += B; cout << A << endl; //12
	A += 13; cout << A << endl; //1
	
	A *= 4; cout << A << endl; //4
	B.setValue(2);
	A *= B; cout << A << endl; //8
	
	A -= 4; cout << A << endl; //4
	B.setValue(7);
	A -= B; cout << A << endl; //9
	
	A &= 4; cout << A << endl; //12
	A &= B; cout << A << endl; //4
	
	A ^= 4; cout << A << endl; //12
	A ^= B; cout << A << endl; //11
	
	A |= 4; cout << A << endl; //3
	A |= B; cout << A << endl; //7
	
	A = B; cout << A << endl; //7
	
	cout << A+B << endl; //3 (range of A is now 2,12)
	cout << A+5 << endl; //12
	
	cout << A-B << endl; //11 
	cout << A-5 << endl; //2
	
	cout << A*B << endl; //5
	cout << A*5 << endl; //2
	
	CircularInt C = A;
	C = A&B; cout << C << endl; //7
	C = A&5; cout << C << endl; //5
	
	C = A^B; cout << C << endl; //11
	C = A^5; cout << C << endl; //2
	
	C = A|B; cout << C << endl; //7
	C = A|5; cout << C << endl; //7
	
	C = ~A; cout << C << endl; //3
	
	A.setValue(6);
	cout << A/3 << endl; //2
	A /= 3; cout << A << endl; //2
	B.setValue(8);
	cout << B/A << endl; //4
	B /= A; cout << B << endl; //4
	
	A.setValue(12);
	B.setValue(3);
	cout << A%3 << endl; //11
	cout << A%B << endl; //11
	A %= 3; cout << A << endl; //11
	B %= A; cout << B << endl; //3
}





