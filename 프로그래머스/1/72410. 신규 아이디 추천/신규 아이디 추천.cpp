#include <bits/stdc++.h>

using namespace std;

bool level2_erase(char c)
{
    if (c >= 'a' && c  <= 'z') return false; 
    
    if (c >= '0' && c <= '9') return false; 
    
    if ('-' == c || '_' == c || '.' == c) return false;
    
    return true;
}

string solution(string new_id) {
    
    string ret_s;
    
    ret_s += new_id;
    
    transform(ret_s.begin(),ret_s.end(),ret_s.begin(), ::tolower); // level 1
    
    ret_s.erase(remove_if(ret_s.begin(), ret_s.end(), level2_erase), ret_s.end()); // level 2
    

    string temp;
    for (auto i : ret_s) // level 3
    {
        if (i == '.')
        {
            if (temp.empty() || temp.back() != '.')
            {
                temp += i;
            }
        }
        else
        {
            temp += i;
        }
    }
    
    ret_s = temp;
    
    while(!ret_s.empty() && ret_s.front() == '.') // level 4
    {
        ret_s.erase(0,1);
    }
    
    while(!ret_s.empty() && ret_s.back() == '.')
    {
        ret_s.pop_back();
    }
    
    if (ret_s.empty()) // level 5
    {
        ret_s += 'a';
    }
    
    if (ret_s.size() >= 16) // level 6
    {
        ret_s.resize(15);
        
        if (ret_s.back() == '.')
        {
            ret_s.pop_back();
        }
    }
    
    while(ret_s.size() < 3) // level 7
    {
        char last = ret_s.back();
        ret_s += last;
    }
    
    
    
    
    return ret_s;
}