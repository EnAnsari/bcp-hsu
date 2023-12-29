#include <iostream>
#include <vector>
using namespace std;
// تابع برای چاپ ماتریس
void printMatrix(const vector<vector<double>>& matrix) {
    for (const auto& row : matrix) {
        for (double element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
}

// تابع برای محاسبه دترمینان ماتریس
double calculateDeterminant(const vector<vector<double>>& matrix) {
    int n = matrix.size();
    vector<vector<double>> tempMatrix(matrix);

    // قرار دادن ماتریس در فرم گوسیان
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            double factor = tempMatrix[j][i] / tempMatrix[i][i];
            for (int k = 0; k < n; ++k) {
                tempMatrix[j][k] -= factor * tempMatrix[i][k];
            }
        }
    }

    // محاسبه دترمینان
    double determinant = 1.0;
    for (int i = 0; i < n; ++i) {
        determinant *= tempMatrix[i][i];
    }

    return determinant;
}

int main() {
    int n;
    cout << "Enter the size of the matrix (n): ";
    cin >> n;

    // خواندن درایه‌های ماتریس
    vector<vector<double>> matrix(n,vector<double>(n));
    cout << "Enter the elements of the matrix:" <<endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    // چاپ ماتریس
    cout << "Entered matrix:" << endl;
    printMatrix(matrix);

    // محاسبه و چاپ دترمینان
    double determinant = calculateDeterminant(matrix);
    cout << "Determinant: " << determinant <<endl;

    return 0;
}
