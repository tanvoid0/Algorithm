#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string input;

	cout << "Please enter a string: ";
	cin >> input;
	
	if (input.begin(), input.begin()+input.size()/2, input.rbegin()) {
	    cout << input << " is a palindrome";
	}
	else
        std::cout << "is NOT a palindrome.\n";
	return 0;
}
