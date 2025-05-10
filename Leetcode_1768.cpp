/* https://leetcode.com/problems/merge-strings-alternately/?envType=study-plan-v2&envId=leetcode-75 */
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
    string merged;
    int i = 0, j = 0;
    int len1 = word1.length(), len2 = word2.length();

    while (i < len1 && j < len2) {
        merged += word1[i++];
        merged += word2[j++];
    }


    while (i < len1) {
        merged += word1[i++];
    }

  
    while (j < len2) {
        merged += word2[j++];
    }

    return merged;
        
    }
};
