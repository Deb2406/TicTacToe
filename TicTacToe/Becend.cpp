#include <iostream>

/**
    ��� ���� �������� �� ����������� ������ �������� � ������ ����������
*/
//���������� ��� ������� � ������ �����, �������� �� ����������, �������� ����.
char drawGameTable(char board[][3]);
//���������� � ������ �����, �������� �� ��������, �� ��������� ��� ������� � �������
int checkGameTable(int line, int number, char symbol);
//��������� ������
bool checkWin();
//�������� �� ������ ����������
int computer();

char NUMBERS_BOARD[][3] = {
            {'9', '8', '7'},
            {'6', '5', '4'},
            {'3', '2', '1'},
};


int comparisonTable(int place,char symbol) {
    int sizeBoard{ 3 };
    bool loop = true;
    char charNumber = static_cast<char>(place+'0');
    for (int line = 0; loop; line++) {
        for (int number = 0; loop; number++) {
            if (NUMBERS_BOARD[line][number] == charNumber) {
                checkGameTable(line, number, symbol);
                loop = false;
            }
        }
    }
    return 0;
}

//������� ����������, �� ����������� ������ ������
int player() {
    int motion{};
    while (true) {
        std::cout << "��� ���, ������� ����� �� 1 �� 9: ";
        std::cin >> motion;

        if (motion <= 9 && motion >= 1) {
            break;
        }
        else {
            std::cout << "Try again :/ \n";
        }
    }
    // ������ 'X' ���������� � �������, ��� �� �� �������� �� ����
    char symbol{ 'X' };
    comparisonTable(motion, symbol);
    return 0;
}

//����� ������� ����� ����� �� ������� ����������  generationNumbers � player
int beckend() {

    setlocale(LC_ALL, "Russian");
    bool loop = true;
    while (loop)
    {
        player();
        computer();
        if (checkWin()) {
            break;
        }
    }
    return 0;
}