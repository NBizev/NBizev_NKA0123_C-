#include <iostream>

using namespace std;

int maximalRectangle(int **matrix, int rows, int cols)
{
    if (rows == 0 || cols == 0)
    {
        return 0;
    }

    int maxArea = 0;
    int *heights = new int[cols]();

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << "Введите элемент [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];

            if (matrix[i][j] == 0)
            {
                heights[j] = 0;
            }
            else
            {
                heights[j] += matrix[i][j];
            }

            int minHeight = heights[j];
            for (int k = j; k >= 0 && matrix[i][k] != 0; --k)
            {
                minHeight = min(minHeight, heights[k]);
                int width = j - k + 1;
                maxArea = max(maxArea, minHeight * width);
            }
        }
    }

    delete[] heights;

    return maxArea;
}

int main()
{
    setlocale(LC_ALL, "RU");

    int rows, cols;
    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> cols;

    int **matrix = new int *[rows];
    for (int i = 0; i < rows; ++i)
    {
        matrix[i] = new int[cols];
    }

    int result = maximalRectangle(matrix, rows, cols);
    cout << "Максимальная площадь прямоугольника: " << result << endl;

    return 0;
}