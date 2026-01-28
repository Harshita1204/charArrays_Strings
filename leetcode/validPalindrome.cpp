#include <iostream>
#include <string>
using namespace std;

class Solution {

private:
    // This function checks if a character is valid
    // Valid means: letter (a-z / A-Z) OR digit (0-9)
    bool valid(char ch) {
        if ((ch >= 'a' && ch <= 'z') ||     // lowercase letters
            (ch >= 'A' && ch <= 'Z') ||     // uppercase letters
            (ch >= '0' && ch <= '9')) {     // digits
            return true;
        }
        return false;
    }

    // This function converts a character to lowercase
    // If it's already lowercase or a digit, return as it is
    char toLowercase(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            return ch;
        } 
        else {
            // Convert uppercase letter to lowercase
            // Example: 'A' -> 'a'
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    // This function checks if a string is palindrome
    bool checkPalindrome(string a) {
        int s = 0;                  // start index
        int e = a.length() - 1;     // end index

        // Two-pointer approach
        while (s <= e) {
            if (a[s] != a[e]) {     // if characters don't match
                return false;       // not a palindrome
            }
            else {
                s++;                // move start forward
                e--;                // move end backward
            }
        }
        return true;                // palindrome
    }

public:
    bool isPalindrome(string s) {

        // Step 1: Remove extra characters (special symbols, spaces)
        string temp = "";

        for (int j = 0; j < s.length(); j++) {
            if (valid(s[j])) {          // keep only valid characters
                temp.push_back(s[j]);
            }
        }

        // Step 2: Convert all characters to lowercase
        for (int j = 0; j < temp.length(); j++) {
            temp[j] = toLowercase(temp[j]);
        }

        // Step 3: Check if cleaned string is palindrome
        // We pass "temp" because:
        // - temp has NO special characters
        // - temp is already lowercase
        // - original string 's' is dirty and not suitable for checking
        return checkPalindrome(temp);
    }
};

int main() {

    Solution obj;   // Create object of Solution class

    string s;
    cout << "Enter a string: ";
    getline(cin, s);   // Take full line input (with spaces)

    // Call isPalindrome function
    bool result = obj.isPalindrome(s);

    if (result) {
        cout << "Palindrome" << endl;
    }
    else {
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}
