#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s)
{
    // Convert to lowercase and remove non-alphanumeric characters
    string cleaned = "";
    for (char c : s)
    {
        if (isalnum(c))
        {
            cleaned += tolower(c);
        }
    }

    // Reverse the cleaned string
    string reversed = cleaned;
    reverse(reversed.begin(), reversed.end());

    // Check if the original and reversed strings are equal
    return cleaned == reversed;
}

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    if (isPalindrome(input))
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}