class RecentCounter 
{
private:
    set<int> valid_time;
    int counter_valid(int timer)
    {
        for (auto i = valid_time.begin(); i != valid_time.end(); i++) 
            if (timer - *i > 3000) valid_time.erase(i); else break;
        return valid_time.size();
    }
public:
    RecentCounter() 
    {
        
    }
    
    int ping(int t) 
    {
        valid_time.insert(t);
        return counter_valid(t);
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */