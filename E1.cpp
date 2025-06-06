#include <iostream>
#include <string>
using namespace std;

bool check_range(int lower_bound, int upper_bound, int test_value) {
    return test_value >= lower_bound && test_value <= upper_bound;
}

int equality_test(int num1, int num2) {
    if (num1 < num2) return -1;
    if (num1 == num2) return 0;
    return 1;
}

bool is_int(string num) {
    if (num.empty()) return false;
    int start = 0;
    if (num[0] == '-') {
        if (num.size() == 1) return false;
        start = 1;
    }
    for (int i = start; i < num.size(); ++i) {
        if (num[i] < '0' || num[i] > '9') return false;
    }
    return true;
}

bool is_float(string num) {
    if (num.empty()) return false;
    int start = 0;
    bool dot_found = false;

    if (num[0] == '-') {
        if (num.size() == 1) return false;
        start = 1;
    }

    for (int i = start; i < num.size(); ++i) {
        if (num[i] == '.') {
            if (dot_found) return false;
           dot_found = true;
        } else if (num[i] < '0' || num[i] > '9') {
            return false;
        }
    }

    if (num == "." || num == "-." || !dot_found) return false;
    return true;
}

void string_to_int(string num, int &value) {
    value = 0;
    int sign = 1;
    int i = 0;
    if (num[0] == '-') {
        sign = -1;
        i = 1;
    }
    for (; i < num.size(); ++i) {
        value = value * 10 + (num[i] - '0');
    }
    value *= sign;
}

void swap(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int word_count(string sentence) {
    if (sentence.empty()) return 0;
    int count = 1;
    for (int i = 0; i < sentence.length(); ++i) {
        if (sentence[i] == ' ') count++;
    }
    return count;
}

int main(){
	   cout << "1. Testing check_range() ....\n";
    cout << "Testing check_range(5,8,6)...\n";
    cout << "Expected: 1\n";
    cout << "Actual: " << check_range(5, 8, 6) << endl;
    if (check_range(5, 8, 6))
        cout << "PASSED\n";
    else
        cout << "FAILED\n";

    cout << "2. Testing equality_test() ....\n";
    cout << "Testing equality_test(7,7)...\n";
    cout << "Expected: 0\n";
    cout << "Actual: " << equality_test(7, 7) << endl;
    if (equality_test(7, 7) == 0)
        cout << "PASSED\n";
    else
        cout << "FAILED\n";

    cout << "3. Testing is_int() ....\n";
    cout << "Testing is_int(\"34\")...\n";
    cout << "Expected: 1\n";
    cout << "Actual: " << is_int("34") << endl;
    if (is_int("34") == 1)
        cout << "PASSED\n";
    else
        cout << "FAILED\n";

    cout << "4. Testing is_float() ....\n";
    cout << "Testing is_float(\"34.2\")...\n";
    cout << "Expected: 1\n";
    cout << "Actual: " << is_float("34.2") << endl;
    if (is_float("34.2") == 1)
        cout << "PASSED\n";
    else
        cout << "FAILED\n";

    cout << "5. Testing string_to_int() ....\n";
    int value;
    cout << "Testing string_to_int(\"1234\", value)...\n";
    cout << "Expected: 1234\n";
    string_to_int("1234", value);
    cout << "Actual: " << value << endl;
    if (value == 1234)
        cout << "PASSED\n";
    else
        cout << "FAILED\n";

    cout << "6. Testing swap() ....\n";
    cout << "Testing swap(7, 9)...\n";
    cout << "Expected num1 = 9, num2 = 7\n";
    int num1 = 7, num2 = 9;
    swap(num1, num2);
    cout << "Actual: num1 = " << num1 << ", num2 = " << num2 << endl;
    if (num1 == 9 && num2 == 7)
        cout << "PASSED\n";
    else
        cout << "FAILED\n";

    cout << "7. Testing word_count() ....\n";
    cout << "Testing word_count(\"Hello, my name is Roger.\")...\n";
    cout << "Expected: 5\n";
    string sentence = "Hello, my name is Roger.";
    cout << "Actual: " << word_count(sentence) << endl;
    if (word_count(sentence) == 5)
        cout << "PASSED\n";
    else
        cout << "FAILED\n";

    return 0;
}
