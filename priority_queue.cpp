#include<queue>
#include<iostream>
using namespace std;

int main()
{
    //�������ȼ�����
    //Ĭ�ϵײ�����Ϊvector
    //���ܵ���������Ϊ����������������Ԫ��˳��
    priority_queue<int, vector<int> > data1;

    //��ʼ�����Զ�����
    vector<int> data2 {2,1,5};
    priority_queue<int> data3 {data2.begin(), data2.end()};
    cout<<data3.top()<<endl;

    //��������
    data3.push(10);
    cout<<data3.size()<<endl;
    cout<<data3.top()<<endl;
    data3.pop();
    cout<<data3.empty()<<endl;

    return 0;
}
