//Zohaib Ahmad
//28/10/2022
//Bubble sort 
#include <iostream>
using namespace std;

int main()
{
    int n , temp,k =1;

    cout<<"Enter the number of elements"<<endl;
    cin>>n;

    int array[n];

    cout<<"Enter the elements of array"<<endl;
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}