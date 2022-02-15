
 
#include <iostream>
 
    using namespace std;
 void bucketort(int * arr,const int len)
{
    const int b = 10;
    int buckets[b][len+1];
    for (int i = 0; i < b; ++i) {
        buckets[i][len] = 0;
    }
    for ( int digit  =1; digit < 1000000000; digit *= 10)
    {
        for ( int i = 0; i < len; ++i)
        {
            if (arr[i]%2 == 0)
            {
                int d = (arr[i] / digit) % b;
                buckets[d][buckets[d][len]++] = arr[i];
            arr[i] = -1;
            }
        }
        int idx = 0;
        for ( int i = 0; i < b; ++i)
        {
            for (int j = 0; j < buckets[i][len]; ++j)
                 {
                    while (arr[idx] != -1) idx++;
                                                    
                    arr[idx] = buckets[i][j];
                }
            buckets[i][len]= 0;
        }
    }
}
int main()
    {
    
    return 0;
}
