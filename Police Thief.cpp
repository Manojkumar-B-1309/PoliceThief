#include <iostream>
#include <vector>
using namespace std;
int policethief(char arr[],int n,int k)
{
    int COUNT = 0,a=0,b=0;
    vector<int> t;
    vector<int> p;
    vector<int>::iterator l;
     for(int i=0;i<n;i++)
     {
            if(arr[i]=='P')
                p.push_back(i);
            else if(arr[i]=='T')
                t.push_back(i);
    }
    while(a<t.size()&&b<p.size())
    {
         if ((t[a]-p[b])<= k)
         {
            COUNT++;
            a++;
            b++;
        }
    }
    return COUNT;
}               
 
int pt(int n)
{
    int k,i,coun;
    char arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    k=1;
    coun=policethief(arr,n,k);
    cout<<"Thieves caught:"<<coun<<endl;
    return coun;
}

int main()
{
    int count=0,n;
    cout<<"Enter Size of matrix:";
    cin>>n;
    count= pt(n);
    count+= pt(n);
    count+= pt(n);
    cout<<"Total Thieves caught:"<<count;
    return 0;
}