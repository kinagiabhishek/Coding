#include<bits/stdc++.h>
using namespace std;
class RandomizedSet {
public:
    /** Initialize your data structure here. */
    unordered_set<int> s;
    vector<int> v;
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(s.find(val)==s.end()){
            s.insert(val);
            v.push_back(val);
            return true;
              
        }
            
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(s.find(val)==s.end())
            return false;
        s.remove(val);
        for(int i=0;i<v.size();i++){
            if(v[i]==val){
                v[i]=v[val.size()-1];
                v.push_back();
                return true;
            }
        }
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        int x=rand()%v.size();
        return v[x];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */