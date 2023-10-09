//Program to delete an element from an array.
#include<iostream>
using namespace std;
int main()
{
    int arr[100], n, i, element, j, found=0;
    cout <<"Enter the size of the array =  ";
    cin >> n;
    cout << "Enter the elements of the array :\n";
      for ( i = 0; i < n; i++)
        cin >> arr[i];
      cout << "Enter the element to delete = ";
      cin >> element;
      for ( i = 0; i < n; i++){
        if (arr[i] == element){
        for (j = i; j < n-1; j++){
        arr[j] = arr[j+1];
        }
      found++;
      break;
        }
      }
      if( found == 0){
        cout << "\nElement is not found !";
      }else{
        cout << "\nElement is deleted successfully !";
    cout << "\nAnd the modified array is :\n";
    for ( i = 0; i < n-1; i++)
        cout << arr[i] << " ";
      }
    return 0;
}
