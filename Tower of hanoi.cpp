//Tower of henoi
#include<bits/stdc++.h>
using namespace std;

void Tower(int n,char beg,char aux,char End)
{
    if(n==1)
    {
        cout<<beg<<" -> "<<End<<endl;
        return;
    }
    Tower(n-1,beg,End,aux);
    Tower(1,beg,aux,End);
    Tower(n-1,aux,beg,End);

}

int main()
{
    Tower(4,'A','B','C');
    return 0;
}
