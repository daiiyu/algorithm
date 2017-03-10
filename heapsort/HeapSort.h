//procedure of heap sort
//build a heap () ---that usually means to make the arrary a complete binary tree---
//    for(from last_not_leaf_node to first_node    ---last_not_leaf_node = floor(size_of_tree / 2) array from 1
//         heapify(node)                           --- last_not_leaf_node =floor(size_of_tree/2 +1) array from 0

//
// Created by superzou on 10/03/2017.
//

#ifndef INSERT_SORT_HeapSort_HH
#define INSERT_SORT_HeapSort_HH
#include <algorithm>
struct  HeapSort
{
public:
    static void heapify(int *heap, int p,int len);

    static int LEFTCHILD(int p)
        {
        return p*2+1;
        }

    static int RIGHTCHILD(int p)
        {
        return (p*2)+2;
        }

    static void build_heap(int *heap, int len);
    static void sort(int *heap, int len);
};

void HeapSort::heapify(int *heap, int p, int len)
    {

    int largest=p;
    int l=LEFTCHILD(p);
    int r=RIGHTCHILD(p);
    if(l>len-1||r>len-1) return;
    //get the larger one between left child and  parent
    if(heap[l] > heap[largest])
        largest=l;
    if(heap[r] > heap[largest])
        largest=r;

    if(largest !=p)
        {
        std::swap(heap[p], heap[largest]);
        heapify(heap, largest, len);
        }
    }
void HeapSort::build_heap(int *heap, int len)
    {
    int last_leaf = len/2;
    for(int i = last_leaf-1; i>=0;--i)
        {
        heapify(heap, i,len);
        }
    }

void HeapSort::sort(int *heap, int len)
    {
    int first=0;
    for(int i=0;i<len;++i)
        {
        std::swap(heap[len-1],heap[0]);
        heapify(heap, 0, --len);
        }

    }
#endif //INSERT_SORT_HeapSort_H
