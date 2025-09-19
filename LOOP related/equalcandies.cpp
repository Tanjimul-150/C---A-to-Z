#include<iostream>
#include <climits>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long candies[n];
        long long min_candies = INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>candies[i];
            if(candies[i]<min_candies)
            {
                min_candies=candies[i];
            }
        }
        int total_eat=0;
        for (int i = 0; i < n; i++) 
        {
            total_eat += (candies[i] - min_candies);
        }
        cout << total_eat << endl;
    }
    return 0;
}