#include <deque>
#include <iostream>
using namespace std;

int main()
{
    deque<int> data1;
    deque<int> data2 (10);
    deque<int> data3 {1,2,3,4,5};
    deque<int> data4 {data3};

    cout<<data4.size()<<endl;
    cout<<data4[0]<<endl;
    cout<<data4.at(1)<<endl;
    cout<<data4.front()<<endl;
    cout<<data4.back()<<endl;

    data4.push_back(6);
    data4.push_front(0);
    cout<<data4.front()<<endl<<data4.back()<<endl;
    data4.pop_back();
    data4.pop_front();

    data4.assign({10,11,12});
    for( auto i: data4)
        cout<<i<<" ";
    cout<<data4.size()<<endl;

    return 0;
}
