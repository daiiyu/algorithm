#include <iostream>
#include "HeapSort.h"
using namespace std;
int main()
    {

    int  heap[]={8,2,4,6,3};
    //std::make_heap(std::begin(heap),std::end(heap));
    //std::sort_heap(std::begin(heap), std::end(heap));

    HeapSort::build_heap(heap, sizeof(heap)/sizeof(int));
    HeapSort::sort(heap,sizeof(heap)/sizeof(int));
    for(auto n:heap)
        cout<<n<<":";

    return 0;
    }