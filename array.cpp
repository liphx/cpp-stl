#include<array>
#include<iostream>
using namespace std;

int main()
{
    //����100��int ��Ԫ�ص�array<>
    array<int,100> data1;

    //��������ʼ��Ϊ0���ߺ�Ĭ��Ԫ�����͵�Ч��ֵ
    array<double,100> data2 {};

    //��ʼ��ǰ3�����������Ϊ0
    array<long,10> data3 {4,5,6};

    //������Ԫ����ɸ�����ֵ
    data1.fill(10);

    //����Ԫ��,at()�����Ƿ�Խ��
    cout<<data1[0]<<endl;
    cout<<data1.at(1)<<endl;

    //����Ԫ�صĸ���
    cout<<data1.size()<<endl;

    //�ж��Ƿ�Ϊ��
    cout<<data1.empty()<<endl;
    array<char,0> data4;
    cout<<data4.empty()<<endl;

    //���ڷ�Χ��ѭ��
    long total = 0;
    for( long x : data3)
        total += x;
    cout<<total<<endl;

    //���ص�һ��Ԫ�ص�����
    data1.front()++;
    cout<<data1.front()<<endl;

    //�������һ��Ԫ�ص�����
    data1.back()--;
    cout<<data1.back()<<endl;

    //�ڱ���׶μ���Ƿ�Խ��ķ���
    cout<<get<99>(data1)<<endl;

    //������
    int sum = 0;
    auto first = data1.begin();
    auto last = data1.end();
    while(first != last)
        sum += *first++;
    cout<<sum<<endl;

    //ȫ�ֵ�����
    auto g_first = begin(data1);
    auto g_last = end(data1);

    //���������
    auto rfirst = data1.rbegin();
    auto rlast = data1.rend();
    auto g_rfirst = rbegin(data1);
    auto g_rlast = rend(data1);

    //const������
    auto cfirst = data1.cbegin();
    auto clast = data1.cend;

    //�Ƚ�,Ԫ�ظ���Ҫ��ͬ
    array<int,100> data5;
    data5.fill(1);
    cout<<(data1<data5)<<endl;

    //��ֵ
    data1 = data5;
    cout<<(data1==data5)<<endl;

    return 0;
}
