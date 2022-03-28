// https://codeforces.com/contest/1607

#include "Round753Div3.h"

using namespace std;

int problemA()
{
    int t; // total TestCases
    int result;
    string alphabet, word;
    cin>> t;
    while(t--){
        result = 0;
        cin >> alphabet >> word;
        for(int i = 1;i < word.length();i++){
            int firstResult = alphabet.find(word[i-1]);
            int secondResult = alphabet.find(word[i]);
            result += abs( firstResult - secondResult);
        }
        cout<< result<<endl;
    }
return 0;
}

long long problemB()
{

    int t;
    long long newLocation, initLocation, timeSteps;
    cin >> t;
    while (t--){
        cin >> initLocation >> timeSteps;
        newLocation = initLocation;
        for (int i=1;i <= timeSteps ;i++){
            if (newLocation % 2 == 0){
                newLocation -= i;
            }
            else{
                newLocation += i;
            }
        }
        cout<< newLocation << endl;
    }
}


int problemC()
{


}
