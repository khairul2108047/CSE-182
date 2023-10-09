//Program to count the frequency of each elements in an array.
#include <iostream>
using namespace std;

int main() {
    int array[100], visited[100];
    int n, i, j, count;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter " << n << " numbers in the array: ";
    for(i=0; i<n; i++){
        cin >> array[i];
    }
    for(i=0; i<n; i++){
        if(visited[i] == 1)
            continue;
        count = 0;
        for(j=0; j<n; j++){
            if(array[i] == array[j]){
                visited[j] = 1;
                count++;
            }
        }
        cout << "Frequency of "<< array[i] << " is = " << count << endl;
    }
    return 0;
}
