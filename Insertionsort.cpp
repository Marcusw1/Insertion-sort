
#include <iostream>
using namespace std;


//declaration
void fill_array(int*);
void print_array(const int*);
void insertion_sort(int*);
const int array_size = 10;


//main
int main(){
 int* array = new int[array_size];
 fill_array(array);
 cout << " - B E F O R E -" << endl;
 print_array(array);

cout << endl;
cout << endl;
cout << endl;

insertion_sort(array);
cout << " - A F T E R -" << endl;
print_array(array);


cout << endl;

delete[] array;
 return 0;	
}



//defintion
void fill_array(int* array){ 
  for(int i =0; i < array_size; i++){
   array[i] = rand()%666;	
  }
}

void print_array(const int* array){
 for(int i=0; i < array_size; i++){
   cout << " " << array[i] << " ";
 }
}

void insertion_sort(int* target_array){
 for(int i = 1; i < array_size; i++){
  for(int j = i; j > 0 && target_array[j-1] > target_array[j]; j--){
   int temp = target_array[j-1];
   target_array[j-1]=target_array[j];
   target_array[j]=temp;	
  }	
 }
}
