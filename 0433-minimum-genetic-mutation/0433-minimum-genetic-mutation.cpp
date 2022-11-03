class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        int n=bank.size();

        unordered_set<string> s;

        for(auto it:bank){
            s.insert(it);
        }

        if(s.find(end)==s.end()){
            return -1;
        }

        unordered_set<string> vis;
        int res=0;
        vector<char> available={'A','C','G','T'};

        queue<string> q;
        q.push(start);
        vis.insert(start);

        while(!q.empty()){
            int n=q.size();
            while(n--){
                string curr=q.front();
                q.pop();

                if(curr==end)
                    return res;
                
                for(int i=0;i<8;i++){
                    char org=curr[i];
                    for(int j=0;j<4;j++){
                        curr[i]=available[j];

                        if(s.find(curr)!=s.end()){
                            if(vis.find(curr)==vis.end()){
                                q.push(curr);
                                vis.insert(curr);
                            }
                        }
                    }
                    curr[i]=org;
                }
            }

            res++;
        }

        return -1;
    }
};