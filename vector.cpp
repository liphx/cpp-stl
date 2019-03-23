#include<vector>
#include<iostream>
using namespace std;

int main()
{
    //创建vector
    vector<int> data1;

    //增加容器的容量，若容量不小于参数则无效
    data1.reserve(20);

    //初始化列表创建vector
    vector<int> data2 {1,2,3,4,5};

    //初始化元素的个数,默认值为0
    vector<int> data3 (10);

    //指定其他默认值
    vector<int> data4 (10,-1);

    //容量
    cout<<data1.capacity()<<endl;

    //大小
    cout<<data1.size()<<endl;

    //改变大小
    vector<int> data5 {1,2};
    data5.resize(3);    // {1,2,0}
    data5.resize(5,1);  // {1,2,0,1,1}
    data5.resize(4);    // {1,2,0,1}

    //访问元素,但不能生成新元素
    cout<<data5[3]<<endl;
    cout<<data5.at(0)<<endl;

    //返回第一个元素的引用
    data5.front()++;
    cout<<data5.front()<<endl;

    //返回最后一个元素的引用
    data5.back()--;
    cout<<data5.back()<<endl;

    //data()返回指向数组的指针
    auto p = data5.data();

    //在末尾增加元素
    data1.push_back(1);
    cout<<data1.size()<<endl;
    cout<<data1[0]<<endl;

    //使用emplace_back添加元素
    vector<string> data6;
    string str = "hello";
    data6.emplace_back(str,0,3);  //调用string的构造函数生成对象
    cout<<data6[0]<<endl;         //"hel"

    //emplace插入一个元素
    auto iter = data6.begin();
    data6.emplace(iter,str,1,4);
    cout<<data6[0]<<endl;
    cout<<data6[1]<<endl;

    //insert插入一个或多个元素








    return 0;
}
