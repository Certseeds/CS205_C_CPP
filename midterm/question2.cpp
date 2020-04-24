/*  CS205_C_CPP 
    Copyright (C) 2020  nanoseeds

    CS205_C_CPP is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as
    published by the Free Software Foundation, either version 3 of the
    License, or (at your option) any later version.

    CS205_C_CPP is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
    */
/**
 * @Github: https://github.com/Certseeds/CS205_C_CPP
 * @Organization: SUSTech
 * @Author: nanoseeds
 * @Date: 2020-04-16 14:06:45 
 * @LastEditors  : nanoseeds
 */
#include <iostream>
#include <fstream>
#include <vector>
#include <unistd.h>
#include <cmath>

using namespace std;

double matrix_determinant(const vector<vector<double>> &matrix);

double matrix_trace(const vector<vector<double>> &matrix);

vector<vector<double>> matrix_add(
        const vector<vector<double>> &matrix1,
        const vector<vector<double>> &matrix2);

vector<vector<double>> matrix_minus(
        const vector<vector<double>> &matrix1,
        const vector<vector<double>> &matrix2);

vector<vector<double>> matrix_sig_multiply(
        const vector<vector<double>> &matrix1,
        const vector<vector<double>> &matrix2);

vector<vector<double>> matrix_multiply(
        const vector<vector<double>> &matrix1,
        const vector<vector<double>> &matrix2);

bool judge_sequre(const vector<vector<double>> &matrix);

void get_matrix(vector<vector<double>> &matrix, ifstream &file);

void output_matrix(const string &str, const vector<vector<double>> &matrix);

int main() {
//    char buf[114514];
//    getcwd(buf, sizeof(buf));
//    printf("current working directory : %s\n", buf);
    std::ifstream file1("Matrix1.txt");
    std::ifstream file2("Matrix2.txt");
    if (!file1.is_open() || !file2.is_open()) {
        return -1;
    }
    vector<vector<double>> matrix1;
    vector<vector<double>> matrix2;
    get_matrix(matrix1, file1);
    get_matrix(matrix2, file2);
    output_matrix("The first matrix is:", matrix1);
    output_matrix("The second matrix is:", matrix2);
    if (matrix1.size() != matrix2.size()) {
        cout << "matrix's size not equal" << endl;
    }
    for (uint32_t i = 0; i < matrix1.size(); ++i) {
        if (matrix1[i].size() != matrix2[i].size()) {
            cout << "matrix's size not equal" << endl;
        }
    }
    vector<vector<double>> addition = matrix_add(matrix1, matrix2);
    output_matrix("The addition of the two matrices is:", addition);
    vector<vector<double>> minus = matrix_minus(matrix1, matrix2);
    output_matrix("The subtraction of the two matrices is:", minus);
    vector<vector<double>> multiply = matrix_multiply(matrix1, matrix2);
    output_matrix("The matrix multiplication of the two matrices is:", multiply);
    vector<vector<double>> single_multiply = matrix_sig_multiply(matrix1, matrix2);
    output_matrix("The element-wise multiplication of the two matrices is", single_multiply);
    if (judge_sequre(matrix1)) {
        cout << "The first matrix is square!" << endl;
        cout << "The determinant of the first matrix is:" << matrix_determinant(matrix1) << endl;
        cout << "The trace of the first matrix is:" << matrix_trace(matrix1) << endl;
    } else {
        cout << "The first matrix is not square!" << endl;
    }
    if (judge_sequre(matrix2)) {
        cout << "The second matrix is square!" << endl;
        cout << "The determinant of the second matrix is:" << matrix_determinant(matrix2) << endl;
        cout << "The  trace of the second matrix is:" << matrix_trace(matrix2) << endl;
    } else {
        cout << "The second matrix is not square!" << endl;
    }

    return 0;
}

double matrix_determinant(const vector<vector<double>> &matrix) {
    uint32_t size_m = matrix.size();
    if (1 == size_m) {
        return matrix[0][0];
    }
    vector<vector<double>> submatrix(size_m - 1, vector<double>(size_m - 1, 0.0f));
    double sum = 0;
    for (uint32_t i = 0; i < size_m; ++i) {
        for (uint32_t j = 0; j < size_m - 1; ++j) {
            for (uint32_t k = 0; k < size_m - 1; ++k) {
                submatrix[j][k] = matrix[(((i > j) ? 0 : 1) + j)][k + 1];
            }
        }
        sum += ((i % 2) ? -1 : 1) * matrix[i][0] * matrix_determinant(submatrix);
    }
    return sum;
}

double matrix_trace(const vector<vector<double>> &matrix) {
    double will_return = 0.0f;
    for (uint32_t i = 0; i < matrix.size(); ++i) {
        will_return += matrix[i][i];
    }
    return will_return;
}

vector<vector<double>> matrix_sig_multiply(
        const vector<vector<double>> &matrix1,
        const vector<vector<double>> &matrix2) {
    vector<vector<double>> will_return;
    if (matrix1.size() != matrix2.size()) {
        cout << "matrix's size not equal" << endl;
        return will_return;
    }
    for (uint32_t i = 0; i < matrix1.size(); ++i) {
        if (matrix1[i].size() != matrix2[i].size()) {
            cout << "matrix's size not equal" << endl;
            return will_return;
        }
    }
    for (uint32_t i = 0; i < matrix1.size(); ++i) {
        vector<double> line(matrix1.size(), 0);
        for (uint32_t j = 0; j < matrix1[j].size(); ++j) {
            line[j] = matrix1[i][j] * matrix2[i][j];
        }
        will_return.push_back(line);
    }
    return will_return;
}

vector<vector<double>> matrix_multiply(
        const vector<vector<double>> &matrix1,
        const vector<vector<double>> &matrix2) {
    vector<vector<double>> will_return;
    for (uint32_t i = 0; i < matrix1.size() - 1; ++i) {
        if (matrix1[i].size() != matrix1[i + 1].size()) {
            cout << "matrix's size not equal,can not multiply" << endl;
            return will_return;
        }
    }
    for (uint32_t i = 0; i < matrix2.size() - 1; ++i) {
        if (matrix2[i].size() != matrix2[i + 1].size()) {
            cout << "matrix's size not equal, can not multiply" << endl;
            return will_return;
        }
    }
    for (const auto &i : matrix1) {
        if (i.size() != matrix2.size()) {
            cout << "matirx's Shape make them can not multiply" << endl;
            return will_return;
        }
    }
    if (matrix1.empty() || matrix2.empty()) {
        cout << "matirx's Shape make them can not multiply" << endl;
        return will_return;
    }
    int32_t size1 = matrix1.size();
    int32_t size2 = matrix2[0].size();
    int32_t size3 = matrix1[0].size();
    will_return = vector<vector<double>>(size1, vector<double>(size2, 0));
    for (int32_t i = 0; i < size1; ++i) {
        for (int32_t j = 0; j < size2; ++j) {
            double count = 0;
            for (int32_t k = 0; k < size3; ++k) {
                count += (matrix1[i][k] * matrix2[k][j]);
            }
            will_return[i][j] = count;
        }
    }
    return will_return;
}

bool judge_sequre(const vector<vector<double>> &matrix) {
    uint32_t size1 = matrix.size();
    for (const auto &i:matrix) {
        if (i.size() != size1) {
            return false;
        }
    }
    return true;
}

vector<vector<double>> matrix_add(
        const vector<vector<double>> &matrix1,
        const vector<vector<double>> &matrix2) {
    vector<vector<double>> will_return;
    for (uint32_t i = 0; i < matrix1.size(); ++i) {
        vector<double> line(matrix1.size(), 0);
        for (uint32_t j = 0; j < matrix1[j].size(); ++j) {
            line[j] = matrix1[i][j] + matrix2[i][j];
        }
        will_return.push_back(line);
    }
    return will_return;
}

vector<vector<double>> matrix_minus(
        const vector<vector<double>> &matrix1,
        const vector<vector<double>> &matrix2) {
    vector<vector<double>> will_return;
    for (uint32_t i = 0; i < matrix1.size(); ++i) {
        vector<double> line(matrix1.size(), 0);
        for (uint32_t j = 0; j < matrix1[j].size(); ++j) {
            line[j] = matrix1[i][j] - matrix2[i][j];
        }
        will_return.push_back(line);
    }
    return will_return;
}

void output_matrix(const string &str, const vector<vector<double>> &matrix) {
    cout << str << endl;
    for (uint32_t i = 0; i < matrix.size(); ++i) {
        for (uint32_t j = 0; j < matrix[0].size() - 1; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << matrix[i].back() << endl;
    }
}

void get_matrix(vector<vector<double>> &matrix, ifstream &file) {
    while (!file.eof()) {
        vector<double> line;
        string temp;
        getline(file, temp);
        if (temp.empty()) {
            break;
        }
        vector<int32_t> positive;
        positive.push_back(-1);
        for (uint32_t i = 0; i < temp.size(); ++i) {
            if (' ' == temp[i]) {
                positive.push_back(i);
            }
        }
        positive.push_back(temp.size());
        for (uint32_t i = 0; i < positive.size() - 1; ++i) {
            int32_t temp_size = positive[i + 1] - positive[i];
            string temp2 = temp.substr(positive[i] + 1, temp_size - 1);
            line.push_back(std::atof(temp2.c_str()));
        }
        matrix.push_back(line);
    }
}