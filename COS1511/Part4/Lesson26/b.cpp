#include <iostream>
using namespace std;

const int MATRIX_NUMBER = 4;

void displayMatrix(int matixP[][MATRIX_NUMBER])
{
  cout << "------" << endl;
  for (int i = 0; i < MATRIX_NUMBER; i++)
  {
    for (int j = 0; j < MATRIX_NUMBER; j++)
    {
      cout << matixP[i][j] << "\t";
    }
    cout << endl;
  }
  cout << "------" << endl;
}

void transposeMatrix(int matrixP[][MATRIX_NUMBER], int transpondedMatrixP[][MATRIX_NUMBER])
{
  for (int i = 0; i < MATRIX_NUMBER; i++)
  {
    for (int j = 0; j < MATRIX_NUMBER; j++)
    {
      if (i == 0)
        transpondedMatrixP[j][0] = matrixP[i][j];
      else if (i == 1)
        transpondedMatrixP[j][1] = matrixP[i][j];
      else if (i == 2)
        transpondedMatrixP[j][2] = matrixP[i][j];
      else if (i == 3)
        transpondedMatrixP[j][3] = matrixP[i][j];
    }
  }
}

int main()
{
  int matrix[MATRIX_NUMBER][MATRIX_NUMBER] = {{1, 2, 1, 2}, {3, 4, 3, 4}, {5, 6, 5, 6}, {7, 8, 7, 8}};
  int transpondedMatrix[MATRIX_NUMBER][MATRIX_NUMBER];

  displayMatrix(matrix);
  transposeMatrix(matrix, transpondedMatrix);
  displayMatrix(transpondedMatrix);

  return 0;
}