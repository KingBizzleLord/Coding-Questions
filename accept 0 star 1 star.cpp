#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count=0,max=0;
    char prev = '9';
    
    
    for(int i=0;i<s.length();i++)
    {
        
         if(s[i] == '0' && prev != '1')
        {
            count++;
            prev = '0';
        }
        
        if(s[i] == '1')
        {
            count++;
            prev = '1';
        }
        
        if(s[i] == '0' && prev == '1')
        {
            if(max <= count)
            {
                max = count;
            }
            
            count= 0;
            count++;
            
            prev = '9';
            
        }
        
        
    }
    
    if(max > count)
    cout << max << endl;
    else
    cout << count << endl;
}
