#include<iostream>
using namespace std;

/* size=5
   3 2 7 6 5
   pivot = 5
   index = 0;
   3<5
   index=1
   2<5
   index=2
   7<5
   no
   6<5
   no
   Place pivot to right position
   3 2 5 6 7
   */

int Partition(int a[],int low,int high ){

    int pivot = a[high];
    int index = low;

    for(int j=low;j<high;j++){

        if(a[j]<pivot)
        {

        	index++;
        }
    }
    int temp = a[high];
    a[high] = a[index];
    a[index] = temp;

    return index;
}

void QuickSort(int a[],int low,int high){

	if(low<high){


     int pivot_Index = Partition(a,low,high);
        QuickSort(a,low,pivot_Index-1);
        QuickSort(a,pivot_Index+1,high);
	}
}

int main()
{
	int a[20],size;

	cout<<"Enter Size You Want:";
	cin>>size;

	cout<<"\nEnter Elements:\n";
	for(int i=0;i<size;i++)
		cin>>a[i];

	QuickSort(a,0,(size-1));

	cout<<"\n Sorted Array:";
    for(int i=0;i<size;i++)
    	cout<<a[i]<<" ";


	return 0;
}
