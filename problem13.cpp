#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

class MAT
{

private:
    int row, col;
    vector<vector<int>> mat;

public:
    MAT(int r, int c) : row(r), col(c)
    {
        mat.resize(row, vector<int>(col, 0));
    }

    void input()
    {
        cout << "enter elements : " << endl;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> mat[i][j];
            }
        }
    }

    void display()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    MAT operator+(const MAT &other) const
    {
        if (row != other.row || col != other.col)
        {
            cout << " matrix dimention is not match for addition" << endl;
        }
        else
        {
            MAT result(row, col);
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    result.mat[i][j] = mat[i][j] + other.mat[i][j];
                }
            }
            return result;
        }
    }
    MAT operator-(const MAT &other) const
    {
        if (row != other.row || col != other.col)
        {
            cout << " matrix dimention is not match for addition" << endl;
        }
        else
        {
            MAT result(row, col);
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    result.mat[i][j] = mat[i][j] - other.mat[i][j];
                }
            }
            return result;
        }
    }
    MAT operator*(const MAT &other) const
    {
        if (col != other.row)
        {
            cout << " matrix dimention is not match for addition" << endl;
        }
        else
        {
            MAT result(row, other.col);
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < other.col; j++)
                {
                    result.mat[i][j] = 0;
                    for (int k = 0; k < col; k++)
                    {
                        result.mat[i][j] += mat[i][k] * other.mat[k][j];
                    }
                }
            }
            return result;
        }
    }

    MAT transpose() const
    {
        MAT result(col, row);
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                result.mat[j][i] = mat[i][j];
            }
        }
        return result;
    }
};

int main()
{
    int m, n;
    cout << "enter m : " << endl;
    cin >> m;
    cout << "enter n : " << endl;
    cin >> n;

    MAT A1(m, n), A2(m, n);

    cout << " matrix 1 ";
    A1.input();

    cout << " matrix 2 ";
    A2.input();

    cout << "elements of matrix 1 : " << endl;
    A1.display();

    cout << "elements of matrix 2 : " << endl;
    A2.display();

    cout << "matrix addition result : " << endl;
    MAT add = A1 + A2;
    add.display();

    cout << "matrix substraction result : " << endl;
    MAT sub = A1 - A2;
    sub.display();

    cout << "matrix multiplication result : " << endl;
    MAT mul = A1 * A2;
    mul.display();

    int choice;
    cout << "enter choice 1 / 2 :" << endl;
    cin >> choice;
    if (choice == 1)
    {
        cout << "matrix transpose result : " << endl;
        MAT trans = A1.transpose();
        trans.display();
    }
    else if (choice == 2)
    {
        cout << "matrix transpose result : " << endl;
        MAT trans = A2.transpose();
        trans.display();
    }
    else
    {
        cout << " INVALID CHOICE !! : PLEASE ENTER A VALID CHOICE " << endl;
    }

    return 0;
}