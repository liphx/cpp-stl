#include<queue>
#include<list>
#include<iostream>
using namespace std;

int main()
{
    //创建queue 同stack
    queue<int> data1;
    queue<int> data2 {data1};
    queue<int,list<int> > data3;

    //基本操作
    data1.push(0);
    data1.push(1);
    cout<<data1.front()<<endl;
    cout<<data1.back()<<endl;
    cout<<data1.size()<<endl;
    cout<<data1.empty()<<endl;
    data1.pop();
    cout<<data1.front()<<endl;

    return 0;
}
