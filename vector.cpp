#include<vector>
#include<iostream>
using namespace std;

int main()
{
    //����vector
    vector<int> data1;

    //������������������������С�ڲ�������Ч
    data1.reserve(20);

    //��ʼ���б���vector
    vector<int> data2 {1,2,3,4,5};

    //��ʼ��Ԫ�صĸ���,Ĭ��ֵΪ0
    vector<int> data3 (10);

    //ָ������Ĭ��ֵ
    vector<int> data4 (10,-1);

    //����
    cout<<data1.capacity()<<endl;

    //��С
    cout<<data1.size()<<endl;

    //�ı��С
    vector<int> data5 {1,2};
    data5.resize(3);    // {1,2,0}
    data5.resize(5,1);  // {1,2,0,1,1}
    data5.resize(4);    // {1,2,0,1}

    //����Ԫ��,������������Ԫ��
    cout<<data5[3]<<endl;
    cout<<data5.at(0)<<endl;

    //���ص�һ��Ԫ�ص�����
    data5.front()++;
    cout<<data5.front()<<endl;

    //�������һ��Ԫ�ص�����
    data5.back()--;
    cout<<data5.back()<<endl;

    //data()����ָ�������ָ��
    auto p = data5.data();

    //��ĩβ����Ԫ��
    data1.push_back(1);
    cout<<data1.size()<<endl;
    cout<<data1[0]<<endl;

    //ʹ��emplace_back���Ԫ��
    vector<string> data6;
    string str = "hello";
    data6.emplace_back(str,0,3);  //����string�Ĺ��캯�����ɶ���
    cout<<data6[0]<<endl;         //"hel"

    //emplace����һ��Ԫ��
    auto iter = data6.begin();
    data6.emplace(iter,str,1,3);
    cout<<data6[0]<<endl;
    cout<<data6[1]<<endl;

    //insert����һ������Ԫ��
    data6.insert(data6.begin(),"00");
    data6.insert(data6.end(),{"11","22"});

    //ɾ��β��Ԫ��
    data6.pop_back();

    //ȥ�������ж��������
    data6.shrink_to_fit();

    //ɾ��һ������Ԫ��
    data6.erase(data6.begin());

    //ɾ������Ԫ��
    data6.clear();
    cout<<data6.size()<<endl;

    //������
    //ͬarray�������ɾ�������ƻ�����������Ҫ���»�ȡ

    return 0;
}
