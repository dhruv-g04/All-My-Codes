#include<iostream>
using namespace std;
void dia_snake (int a[][100], int x , int y) {
	int i = 0, j = 0, ci = 0, cj = 0, nos = 1, add = 1;
	// cout<<ci<<cj<<endl;
	for (int k = 0; k < (x + y - 1); k++) {
		// ci = i;
		// cj = j;

		if (k % 2 == 0) {
			while (ci >= 0 and cj >= 0 and ci <x and cj<y) {
				cout << a[ci][cj] << " ";
				ci++;
				cj--;
			}
			if (ci < x) {
				cj++;
			}
			else {
				cj++;
				cj++;
				ci--;
			}
		}
		else {
			while (ci >= 0 and cj >= 0 and ci <x and cj<y) {
				cout << a[ci][cj] << " ";
				ci--;
				cj++;
			}
			if (cj < y) {
				ci++;
			}
			else{
				ci++;
				ci++;
				cj--;
			}

		}
		// cout<<endl;
		// cout<<"ID: "<<ci<<cj<<endl;

	}
}
int main()
{
	int M, N;
	cin >> M >> N;
	int a[100][100];
	int e = 0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> a[i][j];
		}
	}
	// for (int i = 0; i < M; i++)
	// {
	// 	for (int j = 0; j < N; j++)
	// 	{
	// 		cout << a[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	// cout<<"snake:"<<endl;
	dia_snake(a, M, N);

}