class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size()>magazine.size()){
            return false;
        }
        
        unordered_map<char,int> res;
        
        for(int i=0;i<magazine.size();i++){
            res[magazine[i]]++;
        }
      
        for(int i=0;i<ransomNote.size();i++){
            
                res[ransomNote[i]]--;
                if(res[ransomNote[i]]<0)
                    return false;
            
        }
        
        return true;
        /*
        if(ransomNote.size()>magazine.size()){
            return false;
        }
        
        int j=0;
        for(int i=0;i<magazine.size();i++){
            if(ransomNote[j]==magazine[i]){
                j++;
            }
        }
        
        if(j==ransomNote.size()){
            return true;
            
        }
        else
            return false;*/
        
    }
};