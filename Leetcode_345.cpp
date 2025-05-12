/* https://leetcode.com/problems/reverse-vowels-of-a-string/?envType=study-plan-v2&envId=leetcode-75 */
class Solution {
public:
    bool isVowel(char c)
    {
        return c == 'A' || c == 'a' || c == 'E'|| c == 'e' || 
               c == 'I'|| c == 'i' || c == 'O' || c == 'o' || 
               c == 'U' || c == 'u';
    }

    string reverseVowels(string s) {
        int l = 0;
        int r = s.size() - 1;

        while (l < r)
        {
            if (isVowel(s[l]) && isVowel(s[r]))
            {
                swap(s[l], s[r]);
                l++;
                r--;
            }
            else if (!isVowel(s[l]))
            {
                l++;
            }
            else // !isVowel(s[r])
            {
                r--;
            }
        }

        return s;
    }
};
