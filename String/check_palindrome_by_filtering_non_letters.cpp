#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'isAlphabeticPalindrome' function below.
 *
 * The function is expected to return a BOOLEAN.
 * The function accepts STRING code as parameter.
 */

bool isAlphabeticPalindrome(string code) {
    vector<char> letter_string;
    
    for(int i = 0;  i < code.size(); i++) {
        if(isalpha(code[i])) {
            letter_string.push_back(tolower(code[i]));
        }
        
    }
    int left = 0;
    for(int right = letter_string.size() - 1; right > left; right--) {
        if(letter_string[left] != letter_string[right]) {
            return false;
        } 
        left++;
    }
   
    return true;
}

int main()
{
    string code;
    getline(cin, code);

    bool result = isAlphabeticPalindrome(code);

    cout << result << "\n";

    return 0;
}

