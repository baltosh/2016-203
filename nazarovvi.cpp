#include "nazarovvi.h"

/**
 * ����� ������
 */
void nazarovvi::lab1()
{
    double coef = 0;
    for (int k=0; k<n-1; k++)
    {
        for (int i=k+1; i<n; i++)
        {
            coef = A[i][k]/A[k][k];
            for (int j=k; j<n; j++)
            {
                A[i][j] -= coef*A[k][j];
               // if (abs(A[i][j])<1e-16) A[i][j] = 0;
            }
            b[i] = b[i] - coef*b[k];
        }
    }
    for(int i = 0; i<n; i++)
        x[i]=b[i];

    for (int i=n-1;i>=0;i--)
    {
        for (int j=i+1;j<n;j++)
                x[i]-=A[i][j]*x[j];
        x[i] = x[i] / A[i][i];
    }

}


/**
 * ����� ������ � ������� �������� ��������
 */
void nazarovvi::lab2()
{

}



/**
 * ����� ����������� ����� (����� ���������)
 */
void nazarovvi::lab3()
{

}



/**
 * ����� ��������
 */
void nazarovvi::lab4()
{

}



/**
 * ����� �����
 */
void nazarovvi::lab5()
{

}



/**
 * ����� �������
 */
void nazarovvi::lab6()
{

}



/**
 * ���� �� ����������� �������
 */
void nazarovvi::lab7()
{

}