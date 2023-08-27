#include<iostream>
using namespace std;
void spiral_print(int a[][100], int x, int y) {
	int sc = 0, ec = y - 1, sr = 0, er = x - 1;
	cout <<sc<<ec<<sr<<er<<endl;
	while (sc <= ec and sr <= er) {
		for (int j = sc ; j <= ec; j++) {
			cout << a[sr][j] << " ";
		}
		sr++;
		for (int i = sr; i <= er; i++) {
			cout << a[i][ec] << " ";
		}
		ec--;
		if (sc < ec) {
			for (int j = ec; j >= sc; j--) {
				cout << a[er][j] << " ";
			}
			er--;
		}
		if (sr < er) {
			for (int i = er; i >= sr; i--) {
				cout << a[i][sc] << " ";
			}
			sc++;
		}
		cout<<endl;
		cout <<sc<<ec<<sr<<er<<endl;
	}

}

int main() {
	int r, c;
	cin >> r >> c;
	int e = 0;
	int a[100][100];
	for (int i = 0 ; i < r; i++) {
		for (int j = 0 ; j < c; j++) {
			e++;
			a[i][j] = e;
		}
	}
	for (int i = 0 ; i < r; i++) {
		for (int j = 0 ; j < c; j++) {

			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	spiral_print(a, r, c);

	return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// void spiral(int arr[100][100], int M, int N)
// {
// int sc = 0, sr = 0, ec = N - 1, er = M - 1;
// while (sc <= ec and sr <= er)
// {
// // print sc
// for (int row = sr; row <= er; row++)
// {
// cout << arr[row][sc] << ", ";
// }
// sc++;

//     // print er
//     for (int col = sc; col <= ec; col++)
//     {
//         cout << arr[er][col] << ", ";
//     }
//     er--;
//     if (sr < er)
//     {

//         // print ec
//         for (int row = er; row >= sr; row--)
//         {
//             cout << arr[row][ec] << ", ";
//         }
//         ec--;
//     }

//     if (sc < ec)
//     {

//         // print sr
//         for (int col = ec; col >= sc; col--)
//         {
//             cout << arr[sr][col] << ", ";
//         }
//         sr++;
//     }
//     cout<<endl;
//     cout <<sc<<ec<<sr<<er<<endl;
// }
// }
// int main()
// {
// int M, N;
// cin >> M >> N;
// int arr[100][100];
// int e=0;
// for (int i = 0; i < M; i++)
// {
//     for (int j = 0; j < N; j++)
//     {	e++;
//         arr[i][j]=e;
//     }
// }
// for (int i = 0; i < M; i++)
// {
//     for (int j = 0; j < N; j++)
//     {	
//         cout<<arr[i][j]<<" ";
//     }
//     cout << endl;
// }

// spiral(arr, M, N);
// cout<<"END"<<endl;
// return 0;
// }