/*
    Fiborooji Sequence
    input : 3, 4
    output Seq: 3, 4, 7, 1, 8, 9, 7, 6, 3, 9, 2, 1, 3, 4
    output : 14 (count until seq when 3,4 is repeated)

    build instruction: gcc -lstdc++ --std=c++20 Fiborooji.cpp
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n1,n2,n3,n4,tmp;
    int cnt=3;//begin with seq of 3 numbers
    cin>>n1>>n2; //Read inpit sequence e.g 3,4

    tmp=n2;             //3rd in seq in Fiborooji
    n3 = (n1+tmp)%10;   //4th in seq in Fiborooji
    n4 = (n3+tmp)%10;  //5th in seq in Fiborooji

    while(!((n3 == n2)&&(tmp == n1)))
    {   
        tmp = n3;
        n3= n4;
        n4 = (n3+tmp)%10;

        cnt++; //Increment count by 1 , because one more new no. in seq added and condition is not met
    }

    cout<<cnt<<'\n'; // output expected result
}