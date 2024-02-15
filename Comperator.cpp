#include <bits/stdc++.h>
using namespace std;
bool comperator(pair<int,int>&p,pair<int,int>&q){
            return p.second<q.second;
        }
int main() {
	    vector<pair<int,int>>v;
    
        sort(v.begin(),v.end(),comperator);
        
}
