#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x; // ������� ��������
    double y; // ��������� ���������� ������
    double A; // �������� ��������� - ������������� ����� ������� ������
    double B; // �������� ��������� - ������������� ����� ������� ������

    cout << "x = ";
    cin >> x;

    A = x * x;

    // ����� 1: ������������ � ��������� ����
    if (x <= 0)
        B = log(fabs(sin(x))) + pow(x, 7);
    else if (x < 3)
        B = 1.0 / tan(fabs(x + 1) / 2);
    else
        B = 3 * x - pow(x, 5);

    y = 1 + 9 * x + B;

    cout << "1) y = " << y << endl;

    // ����� 2: ������������ � ����� ����
    if (x <= 0)
        B = log(fabs(sin(x))) + pow(x, 7);
    else if (x < 3)
        B = 1.0 / tan(fabs(x + 1) / 2);
    else
        B = 3 * x - pow(x, 5);

    y = 1 + 9 * x + B;

    cout << "2) y = " << y << endl;

    cin.get();
    return 0;
}
