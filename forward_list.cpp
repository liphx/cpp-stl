#include<forward_list>
#include<iterator>
#include<iostream>
using namespace std;

int main()
{
    forward_list<int> data {1,2,3};
    cout<<distance(data.begin(),data.end())<<endl; //û��size()��������ȡ��С
    data.push_front(0);  //û��push_back()
    data.insert_after(data.begin(),0);
    data.pop_front();
    cout<<data.front()<<endl;
    //sort() merge() remove() remove_if() unique() ͬlist

    return 0;
}
