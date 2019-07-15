class Solution {
    
    bool ismuta(string str1, string str2){
        int len1=str1.size();
        int len2=str2.size();
        if(len1!=len2)
            return false;
        int cnt=0;
        for(int i=0;i<len1;++i){
            if(str1[i]!=str2[i])
                ++cnt;
        }
        if(cnt==1)
            return true;
        else return false;
    }
    
    struct state{
        string str;
        int t;
    };
    
    queue<state> Q;
    bool mark[20000];
    
    
    
public:
    int minMutation(string start, string end, vector<string>& bank) {
        memset(mark,false,sizeof(mark));
        while(!Q.empty())
            Q.pop();
        Q.push({start,0});
        for(int i=0;i<bank.size();++i){
            if(start==bank[i])
                mark[i]=true;
        }
        bool flag=false;
        int ans;
         while(!Q.empty()){
            state tmp=Q.front();
            Q.pop();
            if(tmp.str==end)
            {
                ans=tmp.t;
                flag=true;
            }
            
            for(int i=0;i<bank.size();++i){
                if(mark[i]==false && ismuta(tmp.str, bank[i])){
                    mark[i]=true;
                    state news={bank[i],tmp.t+1};
                    Q.push(news);
                }
            }
            
        }
       
        if(flag==true)
            return ans;
        else
            return -1;
    }
};
