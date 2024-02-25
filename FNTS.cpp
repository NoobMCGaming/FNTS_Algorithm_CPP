#include <bits/stdc++.h>

using namespace std;

void FNTS(vector<long long> arr, long long kq, vector<long long>current, long long index, long long sum){
    if(sum == kq){
        for(auto val : current){
            cout<<val<<" ";
        }
        cout<<endl;
        return;
    }
    if(index == arr.size()){
        return;
    }
    FNTS(arr, kq, current, index + 1, sum);
    current.push_back(arr[index]);
    FNTS(arr, kq, current, index + 1, sum + arr[index]);
    current.pop_back();
}

int main(){
    long long n, k;
    cin>>n>>k;
    vector<long long> a;
    long long x;
    for(long long i = 0; i < n; i++){
        cin>>x;
        a.push_back(x);
    }
    vector<long long>vct;
    FNTS(a, k, vct, 0, 0);
    return 0;
}
