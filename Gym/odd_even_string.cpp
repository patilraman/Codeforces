/*
    ODD/EVEN string
    input : string e.g "test"
    output : ODD because count of 'e' & 's' is 1 an odd no.
 

    build instruction: gcc -lstdc++ --std=c++20 odd_even_string.cpp
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool IfEven(string input)
{
    bool status=true;
    vector<int> alpha(26,0); //initialize vector contianing count of each alpha in string
    
    for(auto &c: input) //calc count of each alphabet in string
        alpha[c-'a']++;

    for(auto &i:alpha)
        if((i!=0)&&(i%2)) //check for ODD alphabets in string
        {
            status = false;
            break;
        }

    return status;
}

int main()
{
    string input;
    cin>>input;//read input string

    if(IfEven(input))
        cout<<"Even"<<'\n';
    else
        cout<<"ODD"<<'\n';
}