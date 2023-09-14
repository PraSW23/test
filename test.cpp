#include <bits/stdc++.h>
using namespace std;

bool check_equal(vector<int> &v){
    for(int i=0;i<v.size()-1;i++)  if(v[i]!=v[i+1]) return false;
    return true;
}

bool is_possible(vector<int> &v){
    int count=0;
    for(int i=0;i<v.size();i++) if(v[i]==1) count++;

    if(count and count<v.size()) return false;
    return true;
}
pair<int,int> smalls(vector<int> &v){
    
    int s1_ind=-1,s2_ind=-1;
    int s1=INT_MAX,s2=INT_MAX;
    for(int i=0;i<v.size();i++){
        if(v[i]<s1){
            s2_ind=s1_ind;
            s2=s1;
            s1=v[i];
            s1_ind=i;
        }
        if(v[i]<s2 and v[i]>s1){
            s2_ind=i;
            s2=v[i];
        }
    }

    if(s2_ind==-1 or s2==INT_MAX) return make_pair(-1,-1);
    return make_pair(s1_ind,s2_ind);

}
int main(){

    vector<int> v={1,2,3};
    if(!is_possible(v)){
        cout<<-1<<endl; return 0;
    }
    if(check_equal(v)){
        cout<<0<<endl; return 0;
    }

    int oper_count=0;

    while(!check_equal(v)){
        oper_count++;

        pair<int,int> p=smalls(v);
        //cout<<p.first<<" "<<p.second<<endl;
        int j=p.first; int i=p.second;
        v[i]=ceil((v[i]*1.0)/v[j]);
        cout<<"dividing i : "<<i<<" by j :"<<j<<endl;

    }

    cout<<"operation count : "<<oper_count<<endl;

    return 0;
}