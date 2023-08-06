

#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, K, L;
        cin >> N >> K >> L;
        int max_length = INT_MIN;
        int lang_count = 0;
        int lang_length = 0;
        int min_x_length = INT_MAX;
        for (int i = 0; i < N; i++)
        {
            int M, lang;
            cin >> M >> lang;

            if (lang == L)
            {
                lang_count++;
                lang_length += M;
            }
            // if (lang == L && M < min_x_length)
            // {
            //     min_x_length = M;
            // }
        }

        if (lang_count < K)
        {
            cout << -1 << endl;
        }
        else
        {
            int playlist_length = lang_length + (K - lang_count) * min_x_length;
            max_length = max(max_length, playlist_length);
            cout << max_length << endl;
        }
    }

    return 0;
}

// =====================================================

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k, l;
    cin >> n >> k >> l;
    vector<pair<ll, ll>> v_p(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v_p[i].first >> v_p[i].second;
    }
    // sort(v_p.rbegin(), v_p.rend());
    sort(v_p.begin(), v_p.end(), greater<pair<int, int>>());

    ll sum = 0;
    ll lang_count = 0;
    for (auto x : v_p)
    {
        if (x.second == l && lang_count < k)
        {
            lang_count++;
            sum += x.first;
        }
    }

    if (lang_count < k)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << sum << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
