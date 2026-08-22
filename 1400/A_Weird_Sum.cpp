#include <iostream>
#include <vector>
#include <utility>
#include <unordered_map>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    unordered_map <int, vector< pair<int, int>> > mp;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int t;
            cin >> t;
            mp[t].push_back( make_pair(i, j) );
        }
    }

    //
    int ans = 0;
    for(auto it: mp)
    {
        for (int i=0; i<it.second.size(); i++)
        {
            for (int j=i+1; j<it.second.size(); j++)
            {
                int x = max(it.second[i].first, it.second[j].first) - min(it.second[i].first, it.second[j].first);
                int y = max(it.second[i].second, it.second[j].second) - min(it.second[i].second, it.second[j].second);
                ans += x + y;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

// TIME LIMIT EXCEEDED