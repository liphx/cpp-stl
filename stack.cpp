#include<stack>
#include<list>
#include<iostream>
using namespace std;

int main()
{
    //����stack��Ĭ��ʹ��deque��Ϊ�ײ�����
    stack<int> data1;

    //ʹ�� list<T> �Ķ�ջ
    stack<int,list<int> > data2;

    //����һ����������ʼ��stack
    list<int> data3 {0,1,2};
    stack<int,list<int> > data4 (data3);

    //�������캯��
    stack<int> data5 {data1};

    //��������
    data5.push(0);
    data5.push(1);
    cout<<data5.top()<<endl;
    cout<<data5.size()<<endl;
    cout<<data5.empty()<<endl;
    data5.pop();
    cout<<data5.top()<<endl;

    return 0;
}
