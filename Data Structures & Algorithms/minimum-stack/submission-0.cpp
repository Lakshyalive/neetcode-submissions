class MinStack {
public:
vector<pair<int,int>> st;
    MinStack() {
        
    }
    void push(int val) {
        int mini = INT_MAX;
        if(st.empty()) mini = val;
        else mini = min(val, st.back().second);
        st.push_back({val , mini});
    }
    
    void pop() {
       st.pop_back();
    }
    
    int top() {
       return st.back().first;
    }
    
    int getMin() {
        return st.back().second;
    }
};
