#include<iostream>

using namespace std;

long Tong(int n){
	if(n==1) return 1;
	return( Tong(n-1) + n );
}

int Gt(int n){
	if(n==0) return 1;
	return ( Gt(n-1) * n );
}
// hàm tìm x trong mảng tăng dần bằng đệ qui
int TimX(int a[], int l, int r, int x){
	int m =( l + r ) / 2 ;
	if (a[m] == x) return m ;
	else if (a[m] > x) return(TimX(a, l, m-1, x));
	return TimX(a, m+1, r, x); 
}

int main(){
	int n = 9;
	int a[] = {1,2,3,4,5,6,7,8,9};
	int l = 0, r = n-1 ;
	int x;
	cout << "Nhap so de biet vi tri cua n trong mang: "; cin >> x ;
	int TimViTri = TimX(a, l, r, x);
	cout << "X o vi tri thu " << TimViTri << endl ;
}