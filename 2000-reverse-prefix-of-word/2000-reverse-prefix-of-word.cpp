class Solution {
public:
    string reversePrefix(string word, char ch) {
        int idx = 0;

        while (idx < word.size() && word[idx] != ch) {
            idx++;
            if (idx == word.size())
            return word;
        }

        int j = 0;

        while (j < idx) {
            swap(word[j], word[idx]);
            j++;
            idx--;
        }

        return word;
    }
};