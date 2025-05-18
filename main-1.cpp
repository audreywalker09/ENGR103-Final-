//**************************************************************
// Program: Assignemnt 4 (tip Calc)
// Author: 
// Date: 5/23/2025
//****************************************************************


#include <iostream>
#include <sting> 
#include <iomanip> // set precition 

using namespace std;

bool check_range(int, int, int);
int equality_test(int, int);
bool is_int(string);
bool is_float(string);
void string_to_int(string, int&);
void swap(int&, int&);
int word_count(string);

int main()
{
    cout << "1. Testing check_range() ....\n";
	cout << "Testing check_range(5,8,6)...\n";
	cout << "Expected: 1\n";
	cout << "Actual: " << check_range(5, 8, 6);
	if (check_range(5, 8, 6)) 
    cout << "PASSED\n" 
    else
    cout << "FAILED\n";

    cout << "2. Testing equality_test() ....\n";
	cout << "Testing equality_test(7,7)...\n";
	cout << "Expected: 0\n";
	cout << "Actual: " << equality_test(7, 7);
	if (equality_test(7, 7) == 0)
    cout << "PASSED\n" 
    else 
    cout << "FAILED\n";

    cout << "3. Testing is_int() ....\n";
	cout << "Testing is_int(\"34\")...\n";
	cout << "Expected: 1\n";
	cout << "Actual: " << is_int("34");
	if (is_int("34") == 1) 
    cout << "PASSED\n" 
    else 
    cout << "FAILED\n";

    cout << "4. Testing is_float() ....\n";
	cout << "Testing is_float(\"34.2\")...\n";
	cout << "Expected: 1\n";
	cout << "Actual: " << is_float("34.2");
	if (is_float("34.2") == 1) 
    cout << "PASSED\n" 
    else
    cout << "FAILED\n";
    

    cout << "5. Testing string_to_int() ....\n";
	int value;
	cout << "Testing string_to_int...(\"1234\", value)\n";
	cout << "Expected: 1234\n";
	string_to_int("1234", value);
	cout << "Actual: " << value;
	if(value == 1234) 
    cout << "PASSED\n" 
    else
    cout << "FAILED\n";

    cout << "6. Testing swap() ....\n";
	cout << "Testing swap(7, 9)...\n";
	cout << "Expected num1 = 9, num2 = 7\n";
	int num1 = 7, num2 = 9;
	swap(num1, num2);
	cout << "Actual: num1 = " << num1 << ", num2 = " << num2;
	if
    (num1 == 9 && num2 == 7) 
    cout << "PASSED\n" 
    else
    cout << "FAILED\n";

    cout << "7. Testing word_count() ....\n";
	cout << "Testing word_count(\"Hello, my name is Roger.\")...\n";
	cout << "Expected: 5\n";
	string sentence = "Hello, my name is Roger.";
	cout << "Actual: " << word_count(sentence);
	if(word_count(sentence) == 5) 
    cout << "PASSED\n" 
    else
    cout << "FAILED\n";
    return 0
}
