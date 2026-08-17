#include <bits/stdc++.h>
using namespace std;
 
void process()
{
    int cnt1, cnt2;
    cin >> cnt1 >> cnt2;
    string result = "YES";
    bool broken = false;
    set<char> seen;
    while (cnt1--)
    {
        string word;
        cin >> word;
        seen.insert(toupper(word[0]));
    }
    while (cnt2--)
    {
        string word;
        cin >> word;
        if (broken) continue;
        for (char letter : word)
        {
            letter = toupper(letter);
            if (seen.find(letter) == seen.end())
            {
                result = "NO";
                broken = true;
                break;
            }
        }
        if (!broken)
            seen.insert(toupper(word[0]));
    }
    cout << result << "
";
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int tc;
    cin >> tc;
    while (tc--)
        process();
 
    return 0;
}