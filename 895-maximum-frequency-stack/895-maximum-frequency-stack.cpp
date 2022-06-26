class FreqStack {
    unordered_map <int, int> umap;
    unordered_map <int, vector <int>> freqStack;
    int maxFreq;

public:
    FreqStack() 
    {
        maxFreq = 0;
    }
    
    void push(int val) {
        umap[val]++;
        int freq = umap[val];
        freqStack[freq].push_back(val);
        maxFreq = max(maxFreq,freq);
    }
    
    int pop() {
        
        while(freqStack.count(maxFreq) == 0)
        {
            maxFreq--;
        }
        
        int top = freqStack[maxFreq].back();
        umap[top]--;
        freqStack[maxFreq].pop_back();
        
        if( freqStack[maxFreq].size() == 0 )
        {
            freqStack.erase(maxFreq);
            maxFreq--;
        }
        
        return top;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */