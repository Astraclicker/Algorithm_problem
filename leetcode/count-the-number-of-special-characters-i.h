#include <head.h>

class Solution {
public:
    static int numberOfSpecialChars(string word) {
        int ans = 0;

        map<char, int> hash;
        map<char, int> is_had;

        for (int i = 0; i < word.size(); i++) {
            if (isupper(word[i])) {
                if (hash.contains(tolower(word[i])) && !is_had.contains(word[i]) && !is_had.
                    contains(tolower(word[i]))) {
                    is_had.emplace(word[i], i);
                    ans++;
                } else {
                    hash.emplace(word[i], i);
                }
            } else {
                if (hash.contains(toupper(word[i])) && !is_had.contains(word[i]) && !is_had.
                    contains(toupper(word[i]))) {
                    is_had.emplace(word[i], i);
                    ans++;
                } else {
                    hash.emplace(word[i], i);
                }
            }
        }
        return ans;
    }
};
