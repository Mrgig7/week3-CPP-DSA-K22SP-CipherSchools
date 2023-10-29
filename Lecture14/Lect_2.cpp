
#include<iostream>
using namespace std;

void minmax(int *a){
//changing *min,*max will effect outside also
	
//	*min = 1;
//	*max = 5;
     
     int i;
     int small=a[0], large=a[0];
     for(i=0;i<5;i++){
     	if(a[i] > large){
     		large = a[i];
		 }
		 if(a[i] < small){
     		small = a[i];
		 }
	 }
	 
	 cout<<"max: "<<large<<" min: "<<small;
}

int main(){
	int a[5];
	
	int i;
	for(i=0;i<5;i++){
		cin>>a[i];
	}
	minmax(a);
	return 0;
}

#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int c; // x,y are pointers to a,b --> they store the address of a and b

    c = *x;
    *x = *y;
    *y = c;

    cout << "The swapping is complete " << endl;
}

int main()
{
    int a, b;

    a = 3;
    b = 4;

    swap(&a, &b); // passing address of a and b to function
    cout << "a and b values after swapping: " << a << " " << b;
    return 0;
}