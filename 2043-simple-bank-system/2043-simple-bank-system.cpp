class Bank {
public:
    vector<long long> mp;

    Bank(vector<long long>& balance) {
        mp=balance;
    }
    
    bool transfer(int account1, int account2, long long money) {
        if(account1-->mp.size() or account2-->mp.size())
            return false;

        if(mp[account1]<money)
            return false;

        mp[account1]-=money;
        mp[account2]+=money;
        return true;
    }
    
    bool deposit(int account, long long money) {
        if(account-->mp.size())
            return false;
        
        mp[account]+=money;
        return true;
    }
    
    bool withdraw(int account, long long money) {
        if(account-->mp.size())
            return false;
        
        if(mp[account]<money)
            return false;
        
        mp[account]-=money;
        return true;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */