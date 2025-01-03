#include<iostream>
using namespace std;

template<typename T>
void selectionsort(T arr[], int size)
{
    for(int i=0;i<size;i++){
        int minindex=i;
      for(int j=i+1; j<size; j++){
        if(arr[j]<arr[minindex])
        {
            minindex=j;
        }
        swap(arr[i],arr[minindex]);
      }
    }
}

int main()
{
    int intarr[]={1,2,3,4,5};
    size_t intarrsize=sizeof(intarr)/sizeof(intarr[0]);

    selectionsort(intarr,intarrsize);
        cout<<"Sorted int array:\n";
        for(int i=0;i<intarrsize;i++)
        {
            cout<<intarr[i];
        }

    float floatarr[]={1.2,2.3,4.5,5,6,7,6};
    size_t floatarrsize=sizeof(floatarr)/sizeof(floatarr[0]);

    selectionsort(floatarr,floatarrsize);
    {
        cout<<"Sorted float array:\n";
        for(int i=0;i<floatarrsize;i++)
        {
            cout<<floatarr[i];
        }
    }

}