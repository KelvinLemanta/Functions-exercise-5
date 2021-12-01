
// 137533 Kelvin Lemanta.

// Function to get average of array and using a loop in the program.

#include <iostream>
using namespace std;

int main() {
   int array[7]={40, 50, 70, 60.5, 72.3, 46.4, 64.9};

   int n, i;
   float sum = 0.0, avg;
   float num[] = {40, 50, 70, 60.5, 72.3, 46.4, 64.9};
   n = sizeof(num) / sizeof(num[0]);
   for(i = 0; i < n; i++)
   sum += num[i];
   avg = sum / n;
   cout<<" The average of the array elements is:  "<<avg;
   return 0;
}
