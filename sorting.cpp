#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    int num_points = 100000;
    int arr[num_points];
    int rand_range = 1000;
    
    srand(time(NULL));

    for(int i=0; i < num_points; i++){
        arr[i] = rand() % rand_range;
    }
    
    cout << "Hello World!" << endl;
    
    for(int i = 0; i < num_points; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout << "Bubble Sort:" << endl;
    bool swapped = true;
    int n  = num_points;
    int counter = 0;
    while(swapped == true){
        swapped = false;
        for (int i = 0; i < n; i++){
            if (arr[i] > arr[i+1]){
                int val = arr[i];
                arr[i]=arr[i+1];
                arr[i+1] = val;
                swapped = true;
            }
        }
     n--;
     counter ++;
    }


    for(int i = 0; i < num_points; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "\n\n " << counter << " iterations\n";


    return 0;
}
