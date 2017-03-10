#include <iostream>
#include <vector>
#include <random>
#include <chrono>

#include "MergeSort.h"
int main()
    {
    using namespace std;
    using namespace chrono;
    random_device rd;

    int ivec[]={8,6,7,4,2,1,9,23,4};
    auto starttime = system_clock::now();
    cout<<"begin input number"<<endl;



    int len = sizeof(ivec)/sizeof(int);
    MergeSort::mergeSort(ivec, 0, len);



    auto endtime = system_clock::now();
    cout<<"input ends:"<<static_cast<double>(duration_cast<microseconds>(endtime - starttime).count()) *
                         static_cast<double>(microseconds::period::num/microseconds::period::den)<<endl;
    for(auto & n:ivec)
    cout<<n<<endl;

    return 0;
    }