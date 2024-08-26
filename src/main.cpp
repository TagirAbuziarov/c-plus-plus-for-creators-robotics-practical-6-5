#include <src/matrix.h>
#include <iostream>

int main()
{
    std::cout << "Test" << '\n';

    math::Matrix m1(3,3), m2(3,3);
    m1(0,0) = 2;
    m1(1,1) = 2;

    m2(0,0) = 5;
    m2(1,1) = 5;

    std::cout << "Матрица m1:\n";
    std::cout << m1 << "\n";

    std::cout << "Матрица m2:\n";
    std::cout << m2 << "\n";

    std::cout << "m1+m2 =\n";
    std::cout << m1+m2 << "\n";

    std::cout << "m1-m2 =\n";
    std::cout << m1-m2 << "\n";

    std::cout << "m1*m2 =\n";
    std::cout << (m1 * m2) << "\n";

    std::cout << "m1 += m2;\n";
    std::cout << "Матрица m1:\n";
    std::cout << (m1 += m2) << "\n";

    std::cout << "m1 -= m2;\n";
    std::cout << "Матрица m1:\n";
    std::cout << (m1 -= m2) << "\n";

    std::cout << "m1 *= m2;\n";
    std::cout << "Матрица m1:\n";
    std::cout << (m1 *= m2) << "\n";
    
    math::Matrix m4;
    std::cin >> m4;

    return 0;
}