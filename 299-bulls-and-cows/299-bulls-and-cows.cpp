// class Solution {
// public:
//     string getHint(string secret, string guess) {
//         int b=0;
//         int c=0;
//       int n=secret.size();

//         unordered_map<char,int>mp1;
//         unordered_map<char,int>mp2;
        
//         for(size_t i=0;i<n;i++){
//              if(secret[i]==guess[i])
//                b++;
//             else
//             mp1[secret[i]]++;
//             mp2[guess[i]]++;
            
//         }
        
//         for(auto it:mp1){
//             if(mp2.find(it.first)!=mp2.end()){
//                c+=min(it.second,mp2[it.first]);
                    
//             }
//         }
//         // string s;
//         //  s.push_back(to_string(b));
//         //  s.push_back('A');
//         //  s.push_back(to_string(c));
//         //  s.push_back('B');
//         // //cout<<b<<" "<<c;
//         return to_string(b)+"A"+to_string(c)+"B";
//     }
// };
class Solution {
public:
    string getHint(string secret, string guess)
    {
        map<char,int> secretMap, guessMap;
        int bulls = 0, cows = 0;
        
        for (size_t i = 0; i < secret.length(); i++)
        {
            if(secret[i] == guess[i])
            {
                bulls++;
            }
            else
            {
                secretMap[secret[i]]++;
                guessMap[guess[i]]++;
            }
        }
        
        for(auto x: secretMap)
        {
            if (guessMap.find(x.first) != guessMap.end())     
            {
                cows += min(x.second, guessMap[x.first]);
            }
        }
        
        return to_string(bulls) + "A" + to_string(cows) + "B";
    }

};