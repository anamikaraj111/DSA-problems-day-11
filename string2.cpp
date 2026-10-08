#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// condition for checking whether it is alphanumeric
bool isAlphanumeric(char s) {
    if ((s >= '0' && s <= '9') || (tolower(s) >= 'a' && tolower(s) <= 'z')) {
        return true;
    }
    return false;
}

bool ValidPalindrome(string s) {
    int start = 0;
    int end = s.length() - 1;
    while (start < end) {
        if (!isAlphanumeric(s[start])) {
            start++;
            continue;
        }
        if (!isAlphanumeric(s[end])) {
            end--;
            continue;
        }
        if (tolower(s[start]) != tolower(s[end])) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    string s = "moom";
    cout << ValidPalindrome(s) << endl;
}