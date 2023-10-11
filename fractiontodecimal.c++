#include <bits/stdc++.h>
using namespace std

class Solution{
public:
    string fractionToDecimal(long long numerator, long long denominator) {
        if(numerator==0){
            return "0";
        }
        string result="";
        if(numerator<0 || denominator<0){
            if(numerator<0 && denominator<0){
                numerator*=-1;
                denominator*=-1;
            }
            else if(numerator<0){
                result+="-";
                numerator*=-1;
            }
            else{
                result+="-";
                denominator*=-1;
            }
        }
        if(numerator%denominator==0){
            return result+convertstr(numerator/denominator);
        }
        if(numerator>=denominator){
            result+=convertstr(numerator/denominator);
            numerator%=denominator;
        }
        else{
            result+="0";
        }
        result+='.';
        map<int,int> index;
        while(numerator!=0 && index[numerator]==0){
            index[numerator]=result.size();
            numerator*=10;
            result+=char((numerator/denominator)+48);
            numerator%=denominator;
        }
        if(index[numerator]!=0){
            result=result.substr(0,index[numerator])+'('+result.substr(index[numerator],result.size())+')';
        }
        return result;
    }

    string convertstr(long long n){
        string result="";
        while(n>0){
            result=char((n%10)+48)+result;
            n/=10;
        }
        return result;
    }
};

int main(){
    Solution result=Solution();
    int num,den;
    cin>>num;
    cin>>den;
    cout<<result.fractionToDecimal(num,den);
    return 0;
}