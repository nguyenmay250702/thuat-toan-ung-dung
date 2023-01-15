#include <iostream>
using namespace std;

const int MAX = 1000;

int m, a[MAX], n, b[MAX], c[MAX][MAX];

int main(){
	cout<<"Nhap m = ";cin>>m;
	for(int i = 1; i <= m; i++){
		cout<<"a["<<i<<"] = ";cin>>a[i];
	}
	cout<<"Nhap n = ";cin>>n;
	for(int i = 1; i <= n; i++){
		cout<<"b["<<i<<"] = ";cin>>b[i];
	}
	for(int i = 1; i <= m ; i++)
		for(int j = 1; j <= n;j++)
			if (a[i] == b[j])
				c[i][j] = c[i-1][j-1] + a[i];
			else
				c[i][j] = max(c[i-1][j], c[i][j-1]);
				
	cout<<"Day con co tong lon nhat = "<<c[m][n];
}