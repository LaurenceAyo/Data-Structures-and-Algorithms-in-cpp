#include<iostream>
using namespace std;
/**
 * @brief Entry point of the program.
 * 
 * This program reads multiple test cases and for each test case, it reads the values of t, s, d, f, and b.
 * It then calculates the minimum number of moves required to reach from position s to position d.
 * If it is not possible to reach the destination, it outputs "Not Reachable".
 * 
 * @return int Returns 0 upon successful execution.
 */

int main()
{
int t,s,d,f,b,m,k;
cin>>k;
for(int i=0;i<k;i++)
{
cin>>t;
cin>>s;
cin>>d;
cin>>f;
cin>>b;
m = 0;
while((s!=d) && (s<=t) && (d<=t))
{
if((s<d) && (f==0))
{
    break;
}
while((s<d) && (f!=0))
{
    s+=f;
    m+=1;
}
if((s>d) && (b==0))
{
    break;
}
while((s>d) && (b!=0))
{
    s-=b;
    m+=1;
}
if(s==d)
{
    cout<<m;
}
else
{
    cout<<"Not Reachable";
}
}
}
return 0;
}

