/* From Dr Conrad Sanderson research */
/* author Pintu Sakariya */

/*template run at compile time to save run time*/
/* to test run g++ -S */
#include <iostream>

using namespace std;

template <int N>
struct Factorial
{
	static const int value = N * Factorial<N-1>::value; // recursive!
};

template <> // template specialisation
struct Factorial<0> // required for terminating condition
{
	static const int value = 1;
};

/*
void user_function()
{
	int x = Factorial<4>::value; // 24, known at compile time
	cout << "factor fun = " << x << endl;
}
*/

int main()
{
	int x = Factorial<5>::value;
	cout << "factore of 4! = " << x <<  endl;
	return 0;
}
