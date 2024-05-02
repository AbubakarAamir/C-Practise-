//Write a program that sorted numbers in ascendings order ?
 #include<iostream>
using namespace std;
int main(){

int a[10]; // Declare an array 'a' of size 10 to store integers numbers.
int i,j,temp; //Declare integer variables i, j, and temp.
cout<<"Enter array elements:"<<endl;//Prompt the user to enter array elements
for ( i = 0; i < 10; i++) //Start a loop to input 10 integers into the array
{
    cin>> a[i]; //Read an integer from the user and store it in the array
}
//Bubble sort algorithm to sort the array in ascending order
for (i = 0; i < 10; i++) 
{
    for (j = i+1; j<10; j++ )
    {
        if (a[i]>a[j]) //If the current element is greater than the next element
        {
            temp = a[i]; // Swap the current element with the next element
            a [i] = a[j];
            a[j] = temp;

        }
        
    }
    
}
cout<<" Array elements:"<<endl;
for ( i = 0; i < 10; i++) //Start a loop to print the sorted array elements
{
    cout<<a[i]; //Print each array element followed by a space
}
cout<<"***********All numbers are sorted in ascending order***********"<<endl;



    return 0;
}