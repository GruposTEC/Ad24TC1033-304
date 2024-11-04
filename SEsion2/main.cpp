#include <iostream>
#include <vector> 

using std::cout;
using std::endl;
using std::vector;

void metodo(int n, int &ref, int ar[])
{ 
  n = 10;
  ref = 5;
  
  cout << "El valor de la variable dentro del metodo " << n << endl;
  cout << "El valor de la referencia es : " << ref << endl;
}  

int main() {
  
  int num = 0;
  int num2 =10;
  
  int arr[3];
  int arr2[] = {0,1,2,3};
  int lon_arr2 = 4;
  
  vector<float> v1;
  v1.push_back(4.5);
  v1.push_back(10);
  v1.push_back(-4);
  
  cout << " El vector tiene " << v1.size() << endl;
  cout << v1[1];
  
  cout << arr2[2];
  cout << arr2[4];
  
  metodo(num,num2, arr2);
  cout << "El numero e : " << num << endl;
 
  return 0;
}