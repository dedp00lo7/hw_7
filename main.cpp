#include <iostream>

using namespace std;
int swapInt(int a, int b)
{
    int temp;
    temp = a;
        a = b;
        b = temp;
    return static_cast<void>(a),b;
}
void sortInserts(int *array, int first, int last) {
    int temp, pos, i;
    for (i = first + 1; i <= last; i++){
        temp = array[i];
        pos = i-1;
        while (pos >= first && array[pos] > temp) {
            array[pos + 1] = array[pos];
            pos = pos -1 ;
            
    }
    
        array[pos + 1] = temp;
   }
}

int median ( int *arr, int first, int last){
    int result;
    int min, max;
    int middle = arr[(first + last) / 2];
    if(arr[first] > arr[middle])
    {
        min = arr[middle];
        max = arr[first];
    } else{
        min = arr[first];
        max = arr[middle];
    }
    if (min > arr[last]) result = min;
    else if (arr[last] > max) result = max;
    else result = arr[last];
    
    if (result == arr[first]) return first;
    else if (result == arr[middle]) return middle;
    else return last;
}
void quicksort(int* arr, int first, int last)
{
    
    if (last - first  > 10){
        int med = median(arr, first, last);
        swap(arr[med],  arr[ (first + last) / 2]);
        int i = first;
        int j = last;
        int x = arr[ (first + last) / 2];
        do {
            while (arr[i] < x) i++;
            while (arr [i] > x) j--;
            if( i <= j) {
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
        }while (i <= j);
        
        quicksort(arr , i, last);
        quicksort(arr , first, j);
        
    }else
    {
        sortInserts ( arr, first, last);
        return;
    }
        
    
}
int main()
    {
    
    return 0;
}

