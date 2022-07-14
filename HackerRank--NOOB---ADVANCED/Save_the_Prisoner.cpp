// #include<bits/stdc++.h>
// using namespace std;

// string LongestWord( string &str){
//      string workingWord = "";
//      string maxWord = "";

//     for (int i = 0; i < str.size(); i++){
//         if(str[i]=='!' || str[i]=='&' || str[i]=='@')
//            continue;
//         if(str[i] != ' ')
//             workingWord += str[i];
//         else
//             workingWord = "";
//         if (workingWord.size() > maxWord.size())
//             maxWord = workingWord;
//     }

//    return maxWord;
// }

// int main(){
//      string str;
//      cout << "Enter a string:";
//     getline( cin, str);

//     string s=LongestWord(str);
//     string code="ad5bnscixj";
//     reverse(s.begin(),s.end());
//     cout<<s<<":"<<code;
     
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
string stringChallenge(string s)
{
    string res;
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=s[i+1])
           {
            res.push_back(s[i]);
            res.push_back(count);
            count=0;
           }
           else
              count++;

    }
    reverse(res.begin(),res.end());
    res+=":ad5bnscixj";
    return res;

}
int main()
{
    string s;
    getline(cin,s);
    cout<<stringChallenge(s)<<"\n";
    return 0;
}