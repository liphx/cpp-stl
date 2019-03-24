#include<algorithm>
#include<iostream>
using namespace std;

void show(vector<int> &data)
{
    for( auto i:data)
        cout<<i<<" ";
    cout<<endl;
}
int main()
{
    vector<int> data {14,5,13,26,4,18,47,26};

    //�����󶥶�
    make_heap(begin(data), end(data));
    show(data);

    //����С����
    make_heap(begin(data), end(data),greater<>());
    show(data);

    //���
    data.push_back(50);
    push_heap(begin(data), end(data),greater<>());
    show(data);

    //ɾ��
    pop_heap(begin(data), end(data),greater<>());
    data.pop_back();
    show(data);

    //�ж��Ƿ�����Ϊ��
    cout<<is_heap(begin(data),end(data))<<endl;
    cout<<is_heap(begin(data),end(data),greater<>())<<endl;

    //����
    if(is_heap(begin(data),end(data),greater<>()))
        sort_heap(begin(data),end(data),greater<>());
    show(data);

    return 0;
}
