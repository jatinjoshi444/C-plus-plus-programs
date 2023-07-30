#include<iostream>
using namespace std;
int main()
{
    char c;
    bool isLower, isUpper;
    cout<<"Enter an alphabet: ";
    cin>>c;

    isLower = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    isUpper = (c=='A' || c=='E' || c=='I' || c=='O' || c== 'U');

    if(!isalpha(c))
        cout<<"Error! Non alphabetic character";
    else if(isLower || isUpper)
        cout<<c<<" is a vowel";
    else
        cout<<c<<" is a consonant";

    return 0;
}