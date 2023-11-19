#include<iostream>
#include<map>
using namespace std; 

void fun()
{
    std::multimap<int, int> map1; 
    std::map<int, int> map; 
    std::map<int, int>::iterator it; 
    map[6] = 0; 
    map[4] = 1; map[3] = 2; map[5] = 3; map[2] = 4; map[7] = 5; 
    for (auto pair: map)
    {
        cout<< pair.first<< " "<< pair.second<< endl; 
    }    
}

int main()
{
    fun(); 
    return 0; 
}

/*
class Solution {
public:
    long long minimumSteps(string s) {
        int idx_fstblckBall;  // index of first black ball (1)
        for (int i=0; i<s.length(); ++i)
        {
            if ( s[i] == '1')
            {
                idx_fstblckBall = i; 
                break;
            }
        }
        
        
        long long int opr_count = 0; 
        
        while (true)
        {
            for (int i=idx_fstblckBall+1; i<s.length(); ++i)
            {
                if (s[i] == '0')
                {
                    swap(s[i], s[i-1]); 
                    if (i-1 == idx_fstblckBall)
                        idx_fstblckBall = i; 
                    opr_count++; 
                    break; 
                }
                else if (i == s.length()-1) // reach to the end of string where there is black ball 
                    return opr_count; 
            }
        }
    }
};





//**********************************************
// Find building where alice and bob can meet 
class Solution {
public:
    vector<int> leftmostBuildingQueries(vector<int>& heights, vector<vector<int>>& queries) {
        vector<int> ans(queries.size()); 
        
        // Iterate through each queries 
        for (int qi = 0; qi<queries.size(); ++qi) // qi ---> query index 
        {
            int A = queries[qi][0], B = queries[qi][1]; // A always less than B 
            if (A>B) swap(A, B);
            
            if (A == B) ans[qi] = B; // Alredy in the same building 
            else if (heights[B] > heights[A]) ans[qi] = B; // meet in the Bob building 
            else 
            {
                int j; 
                for (j=B+1; j<heights.size(); ++j)
                {
                    if ( heights[j] > heights[A] && heights[j] > heights[B])
                    {
                        ans[qi] = j; 
                        break; 
                    }
                }
                if ( j == heights.size()) ans[qi] = -1; // Not possible to meet 
            }
        }
        
        return ans; 
    } // O(M * N) --> M size of heights and N no of queries 
};*/