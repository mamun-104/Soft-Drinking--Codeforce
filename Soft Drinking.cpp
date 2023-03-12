
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;

    /*
    n = number of friends
    k = number of bottles
    l = each bottle has l milimeter of drink
    c = number of limes
    d = number of slices in one lime
    p = quantity of salt in gram

    nl = for toast, required milimeter of drink
    np = required salt for toast
    1 slice of lime


    */

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int total_drink = k*l;
    int total_lime_pieces = c*d;

    int ans = 0;

    ans = min(total_drink/nl, min(total_lime_pieces,p/np));

    cout<<ans/n;



    return 0;
}
