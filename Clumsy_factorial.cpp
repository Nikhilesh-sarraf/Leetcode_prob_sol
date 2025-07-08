class Solution {
public:
    int clumsy(int n) {
      stack<int>st;
      int operation=0;
      st.push(n);
      for(int i=n-1;i>=1;i--){
        //  multiply
        if(operation==0){
            int x=st.top();
            st.pop();
            st.push(x*i);
        }
        // divide
         else if(operation==1){
            int x=st.top();
            st.pop();
            st.push(x/i);
        }
        //   Addition
         else if(operation==2){
            st.push(i);
        }
        // subtration
          else
            st.push(i*(-1));
 
        operation=((operation+1)%4);

      }
    //   Total value sum from the stack
      int total=0;
      while(!st.empty()){
       total+=st.top();
       st.pop();
      }
      return total;
    }
};