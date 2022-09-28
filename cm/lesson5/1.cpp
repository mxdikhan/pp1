#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack <int> st;
    st.push(5);
    st.push(2);
    st.push(-4);
    st.push(12);
    
    while(!st.empty()){
        printf("The size of the stack is: \nThe top element is: \n", st.size(), st.top());
        st.pop();
    }

    return 0;
}