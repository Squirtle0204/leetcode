class StockSpanner {
public:
stack<pair<int,int>>st;
int index;
    StockSpanner() {
         index=0;
        
    }
    
    int next(int price) {
        while(!st.empty() && st.top().first<=price){
            st.pop();
        }
        int span = index-((st.empty()?-1: st.top().second));
        st.push({price,index});
        index++;
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */