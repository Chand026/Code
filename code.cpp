

#include <bits/stdc++.h>
using namespace std;
void fun(int row){
   int n = 2 * row - 1;
   int left = 0, right = n - 1;
   vector<char> arr(n, '*');
   for(int i = 1; i <= row; i++)
   {
        for(int j = 0; j < n; j++)
        cout<<arr[j];
        cout<<"\n";
       arr[left] = ' ';
       arr[right] = ' ';
       left++;
       right--;
   }
}

int main(){
    int row;
    cin>>row;
    
      fun(row);
    return 0;
    
}
