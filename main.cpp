

#include <iostream>
using namespace std;


void qs(int *items, int left, int right)
{
    int i, j;
  char x, y;

  i = left; j = right;
  x = items[(left+right)/2]; /* выбор компаранда */

  do {
    while((items[i] < x) && (i < right)) i++;
    while((x < items[j]) && (j > left)) j--;

    if(i <= j) {
      y = items[i];
      items[i] = items[j];
      items[j] = y;
      i++; j--;
    }
  } while(i <= j);

  if(left < j) qs(items, left, j);
  if(i < right) qs(items, i, right);
}
int main()
{
    const int SIZE = 40;
    int arr[SIZE] = {  };
    qs(arr, 0 , SIZE-1);
    
   
     
       
    return 0;
}
