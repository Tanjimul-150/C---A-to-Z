#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    string S;
    cin >> N >> S;

    long long score = 0;
    int i = 0;

    while(i < N){
        char c = S[i];

        if(c == 'V'){
            score += 5;
            i++;
        }
        else if(c == 'W'){
            score += 2;
            i++;
        }
        else if(c == 'X'){
            i += 2;
        }
        else if(c == 'Y'){
            if(i + 1 < N){
                char nxt = S[i + 1];
                S += nxt;
                i += 2;
                N++;
            } else {
                i++;
            }
        }
        else if(c == 'Z'){
            if(i + 1 < N){
                char nxt = S[i + 1];
                if(nxt == 'V'){
                    score /= 5;
                    i += 2;
                }
                else if(nxt == 'W'){
                    score /= 2;
                    i += 2;
                }
                else {
                    i++;
                }
            } else {
                i++;
            }
        }
        else{
            i++;
        }
    }

    cout << score << "\n";
    return 0;
}