class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vowel;
        for(int i=0;i<s.size();i++){
            if(tolower(s[i])=='a' or tolower(s[i])=='e' or tolower(s[i])=='i' or tolower(s[i])=='o' or tolower(s[i])=='u')
                vowel.push_back(s[i]);
        }

        reverse(vowel.begin(),vowel.end());

        int k=0;
        for(int i=0;i<s.size();i++){
            if(tolower(s[i])=='a' or tolower(s[i])=='e' or tolower(s[i])=='i' or tolower(s[i])=='o' or tolower(s[i])=='u'){
                s[i]=vowel[k];
                k++;
            }
        }

        return s;
    }
};