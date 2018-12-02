class ZigzagIterator {
public:
    ZigzagIterator(vector<int>& v1, vector<int>& v2) {
        itra1 = v1.begin();
        edn1 = v1.end();
        itra2 = v2.begin();
        edn2 = v2.end();
        flag = true;
    }

    int next() {
        int ans;
        if(flag){
            if(itra1!=edn1)
            {
                ans =  *itra1++;
            }
            else{
                ans = *itra2++;
            }
        }
        else{
            if(itra2!=edn2)
            {
                ans = *itra2++;
            }
            else{
                ans = *itra1++;
            }
        }
        flag = !flag;
        return ans ;
        
    }

    bool hasNext() {
        return(itra1!=edn1||itra2!=edn2);
    }
    private:
    vector<int>::iterator itra1;
    vector<int>::iterator itra2;
    vector<int>::iterator edn1;
    vector<int>::iterator edn2;
    bool flag;
};

/**
 * Your ZigzagIterator object will be instantiated and called as such:
 * ZigzagIterator i(v1, v2);
 * while (i.hasNext()) cout << i.next();
 */
