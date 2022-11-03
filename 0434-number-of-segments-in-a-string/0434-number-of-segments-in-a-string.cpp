class Solution {
public:
    int countSegments(string s) {
        int count=0;
        s+=' ';
        if(s=="")
            return 0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' and (i-1)>=0 and s[i-1]!=' ')
                count++;
        }

        return count;
    }
};