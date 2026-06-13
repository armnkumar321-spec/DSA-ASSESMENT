#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;


	while(t--){
		int n; cin>>n;
		vector<int>v(n);
		for(int i=0; i<n; i++){
			cin>>v[i];
		}
		int minimum=v[0];
		int maximum=v[0];


       

        for (int i = 0; i < n; i++) {
            
            minimum = min(minimum, v[i]);
            maximum = max(maximum, v[i]);
        }

        cout << maximum - minimum + 1 <<endl;
    }


	}
