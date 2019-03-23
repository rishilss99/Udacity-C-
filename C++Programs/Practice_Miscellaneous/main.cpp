#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main(void) 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k;
    scanf("%d %d",&n,&k);
    string raw_input;
//    vector <vector<int>> array1(n,vector<int>(6));
//    vector <vector<int>> query1(k,vector<int>(2));
    vector <vector<int>> array1;
    vector <vector<int>> query1;
    for(int i=0;i<n;i++)
    {
        while(getline(cin,raw_input,' '))
        {
            array1[i].push_back(atoi(raw_input));
        }
    }
    
    
//    for(int m=0;m<k;m++)
//    {
//            cin>>q1>>q2;
//            query1[m].push_back(q1);
//            query1[m].push_back(q2);
//            
//    }    
    for(unsigned int o=0;o<array1.size();o++)
    {
        for(unsigned int l=0;l<array1[o].size();l++)
        {
            cout<<array1[o][l]<<" ";
        }
        cout<<endl;
    }
    

    
    return 0;
}