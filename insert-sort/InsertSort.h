//
// Created by superzou on 2017/3/5.
//

#ifndef INSERT_SORT_MY_ALGORITHM_H
#define INSERT_SORT_MY_ALGORITHM_H
#include <iostream>
using namespace std;
class InsertSort
{
public:
    static void insert_sort_up(int *arr, int len);
    static void insert_sort_down(int *arr, int len);

    static void test(int *rNumber,int len);
};

 void InsertSort::test(int *rNumber,int len)
    {
    for(int i=1;i<=len;++i)
        {
        cout<<rNumber[i]<<",";
        }
    cout<<endl;

    //insert_sort_up(rNumber,sizeof(rNumber)/sizeof(int));
    insert_sort_down(rNumber,sizeof(rNumber)/sizeof(int));

    for(int i=0;i<sizeof(rNumber)/sizeof(int);++i)
        {
        cout<<rNumber[i]<<',';

        }
    }





#endif //INSERT_SORT_MY_ALGORITHM_H


void InsertSort::insert_sort_up(int * arr, int len)
    {
    int key;
    int j;
    for (int x = 1; x < len; ++x)
        {
        key = arr[x];
        //左边区域(0,x-1)是已经拍好的，且x-1是最大值
        //所以，arr[j]>key说明需要排序
        for (j = x - 1; j >= 0 && arr[j] > key; --j)
            {
            //下面的代码容易写错， 该循环用来搬移数据
            //一次向后搬移应该使用同一个下标
            //错误写成arr[x]=arr[j]
            arr[j + 1] = arr[j];
            }
        arr[j + 1] = key;
        }
    }


void InsertSort::insert_sort_down(int *arr, int len)
    {
    int i, j, key;
    for(i=1; i<len ;++i)
        {
        key=arr[i];
        for(j=i-1; j>=0 && arr[j]<key;--j)
            {
            arr[j+1]=arr[j];
            }
        arr[j+1]=key;
        }
    }