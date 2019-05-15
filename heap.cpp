#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void show(vector<int>& data)
{
    for( auto i:data)
        cout<<i<<" ";
    cout<<endl;
}
int main()
{
    vector<int> data {14,5,13,26,4,18,47,26};

    //创建大顶堆
    make_heap(begin(data), end(data));
    show(data);

    //创建小顶堆
    make_heap(begin(data), end(data),greater<>());
    show(data);

    //添加
    data.push_back(50);
    push_heap(begin(data), end(data),greater<>());
    show(data);

    //删除
    pop_heap(begin(data), end(data),greater<>());
    data.pop_back();
    show(data);

    //判断是否依旧为堆
    cout<<is_heap(begin(data),end(data))<<endl;
    cout<<is_heap(begin(data),end(data),greater<>())<<endl;

    //排序
    if(is_heap(begin(data),end(data),greater<>()))
        sort_heap(begin(data),end(data),greater<>());
    show(data);

    return 0;
}