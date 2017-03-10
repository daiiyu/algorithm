#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include "InsertSort.h"
#include <algorithm>

using namespace std;
int main()
    {

    int  arr[]={8,2,4,6,3};
    //InsertSort::insert_sort_down(arr, sizeof(arr)/sizeof(int));
    InsertSort::insert_sort_up(arr, sizeof(arr)/sizeof(int));

    for(auto n:arr)
        cout<<n<<":";

       return 0;
    }