//Transpose a matrix
#include <iostream>
using namespace std;

const int N = 4;

//Display the contents of a matrix on the screen
void showMatrix(const int matP[][N])
{
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
      cout << matP[i][j] << '\t';
    cout << endl;
  }
}

//Transpose the matrix
void transpose(int matP[][N])
{
  for (int i = 0; i < N - 1; i++)
    for (int j = i + 1; j < N; j++)
      swap(matP[i][j], matP[j][i]);
}

int main()
{
  int mat[][N] = {{1, 2, 1, 2}, {3, 4, 3, 4}, {5, 6, 5, 6}, {7, 8, 7, 8}};

  cout << "Before transposing" << endl;
  showMatrix(mat);

  transpose(mat);

  cout << "After transposing" << endl;
  showMatrix(mat);

  return 0;
}
