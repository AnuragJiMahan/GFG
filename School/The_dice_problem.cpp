// Question link:- https://practice.geeksforgeeks.org/problems/the-dice-problem2316/1/?category[]=Mathematical

// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int oppositeFaceOfDice(int N)
    {
        //0 1 2 3 4 5 6
        //0 6 5 4 3 2 1
        int arr[7] = {0,6,5,4,3,2,1};
        return arr[N];
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        int ans  = ob.oppositeFaceOfDice(N);
        cout<<ans<<endl;
    }
    return 0;
}  // } Driver Code Ends