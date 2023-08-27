#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int maximumNumberOfStringPairs(vector<string> &words)
{
    int c = 0;
    for (int i = 0; i < words.size(); i++)
    {
        for (int j = i + 1; j < words.size(); j++)
        {
            string temp = words[j];
            reverse(temp.begin(), temp.end());
            if (words[i] == temp)
            {
                c++;
            }
        }
    }
    return c;
}

int longestString(int x, int y, int z)
{
    int c = 0;
    c = z;
    if (x < y)
    {
        c += (2 * x) + 1;
        // if(x+z>=y){
        //     return 2*(x+y+z);
        // }
        // else{
        //     return 2*(x+z+x+z);
        // }
    }
    else if (x == y)
    {
        c += 2 * x;
    }
    else
    {
        c += (2 * y) + 1;

        // if(y+z>=x){
        //     return 2*(x+y+z);
        // }
        // else{
        //     return 2*(y+z+y+z);
        // }
    }

    return 2 * c;
}

int minimizeConcatenatedLength(vector<string> &words)
{
    int len = (words[0]).size();
    char s = words[0][0];
    char e = words[0][len - 1];
    // char e=words[0][(words[0]).size()-1];
    
    for (int i = 1; i < words.size(); i++)
    {
        int tl=words[i].size() ;
        char ts = words[i][0];
        char te = words[i][tl- 1];
        len+=tl;

        // if(s==ts){
        //     len--;
        //     s=e;
        // }
        if(s==te){
            len--;
            s=ts;
            e=e;
        }
        // else if(e==te){
        //     len--;
        // }
        else if(e==ts){
            len--;
            s=s;
            e=te;
        }
        else{

        }
        
    }
    return len;
}

int main()
{
    vector<string> s = {"cd", "ac", "dc", "ca", "zz"};
    cout << longestString(1, 39, 14);

    return 0;
}