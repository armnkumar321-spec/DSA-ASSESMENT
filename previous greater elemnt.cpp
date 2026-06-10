#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {2, 1, 3, 5, 4};
    int n = arr.size();

    vector<int> answer(n, -1);
    stack<int> st;

    for(int i = 0; i < n; i++) {

        while(!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        if(!st.empty()) {
            answer[i] = st.top();
        }

        st.push(arr[i]);
    }

    for(int x : answer) {
        cout << x << " ";
    }
}