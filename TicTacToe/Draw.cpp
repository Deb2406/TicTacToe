#include <iostream>

/**
    ���� ���� �������� �� ����������, �������� ����
*/
char drawGameTable(char board[][3]) {
    std::cout << "\n";
    int sizeBoard { 3 };

    //����� ��������,�� 2-�� ������� ������� ���������� ������� ����
    for (int line = 0; line < sizeBoard; line++) {
        for (int number = 0; number < sizeBoard; number++) {
            //� ������ ���������� ������ �����, � ����� ����� �� �������
            std::cout << " " << board[line][number];
            //����� 2 ��������� �� �������� |
            if (number != 2) {
                std::cout << "  |";

            }

        }
        //�������� �������������
        if (line != 2) {
            std::cout << "\n";
            std::cout << "----+----+----";
            std::cout << "\n";

        }
    }
    std::cout << "\n";
    std::cout << "\n";
    return 0;
}