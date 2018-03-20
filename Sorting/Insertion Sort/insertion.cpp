#include <iostream>
#include <algorithm>
using namespace std;

void i_insertion_sort(int n, int A[]){
  for (int j = 1; j < n; j++) {
    for(int i = j; i > 0; i--){
      if(A[i] >= A[i-1]) {
        break;
      } else {
        swap(A[i], A[i-1]);
      }
    }
  }
}

void r_insertion_sort(int n, int A[]){
  if(n > 1){
    i_insertion_sort(n-1, A);
    for (int i = n-1; i > 0; i--){
      if(A[i] < A[i-1]) {
        swap(A[i], A[i-1]);
      } else {
        break;
      }
    }
  }
}

int main(){
  const int n=7;
  int A[n]={7,1,4,3,2,8,5};
  i_insertion_sort(n,A);
  for (auto a:A){
    cout<<a<<endl;
  }
  return 0;
}
