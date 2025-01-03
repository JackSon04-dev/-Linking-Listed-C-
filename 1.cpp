#include<iostream>
using namespace std ;
void interchangesort(int a[], int n){
	for(int i = 0; i < n - 1; i++){
	  for( int j = i + 1; j < n; j++){
		if(a[i] > a[j])
		swap(a[i], a[j]);
	  }	
	}	
 }
void selectionsort( int a[], int n){
	for( int i = 0; i < n-1; i++ ){
		int min = i ; 
		for(int j = i + 1; j < n; j++){ 
			if(a[min] > a[j]) 
			min = j ; 
		}
		if(i != min)
		swap(a[i], a[min]) ;
	}
}
void insertionsort(int a[], int n){
	for(int i = 1; i < n; i++){
		int t = a[i];
		int j = i - 1;
		
		while(j>=0 && a[j] > t){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = t ;
	}
}
void bubblesort( int a[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(a[j] > a[j+1])
			swap(a[j], a[j+1]);
		}
	}
}
void quicksort(int a[], int l, int r){
	int x = a[(l+r)/2];
	int i = l, j = r ;
	while(i < j){
	  while(a[i] < x) i++;
	  while(a[j] > x) j--;
	    if(i <= j){
	     swap(a[i], a[j]);
		 i++;
		 j--;	
        }
	}
	if(l < j) quicksort(a, l, j);//de qui
	if(r < i) quicksort(a, i, r);//de qui
}
int main(){
	int n = 8;
	int a[] = {5, 6, 9, 7,10,4,0, 8};
    quicksort(a, 0, n-1);
    for(int i = 0 ; i < n; i++)
    cout << a[i] << " ";
	return 0;
}
