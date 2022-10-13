#include <iostream>
#include <string>

class Counter {

private:
    int startCounter;

public:
    Counter(int startCounter) {};

    void setNum(int startCounter1) { startCounter = startCounter1; }

    Counter(std::string positive01, std::string positive02,
        std::string negative01, std::string negative02, std::string answer0) {

        if (positive01 == answer0 || positive02 == answer0) {

            std::cout << "������� ��������� �������� ��������: ";
            std::cin >> startCounter;
            setNum(startCounter);
            std::cout << std::endl;


        }
        else {

            Counter(1);

            std::cout << std::endl;
        }
    };

    int add() { return ++startCounter; };

    int dif() { return --startCounter; };

    void equally() { std::cout << startCounter; };
};

int main(int argc, char** argv) {
    setlocale(LC_ALL, "rus");
    Counter cont(1);
    std::cout
        << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";

    std::string positive1 = "��";
    std::string positive2 = "��";
    std::string negative1 = "���";
    std::string negative2 = "���";
    std::string positiveEn1 = "Yes";
    std::string positiveEn2 = "yes";
    std::string negativeEn1 = "No";
    std::string negativeEn2 = "no";
    positive1 = positiveEn1;
    positive2 = positiveEn2;
    negative1 = negativeEn1;
    negative2 = negativeEn2;

    std::string answer;
    std::cin >> answer;

    //int startCounter;

    std::cout << std::endl;

    Counter(positive1, positive2, negative1, negative2, answer);

    std::cout << "������� ����������: " << std::endl
        << "+ : ��������� ������� �� 1" << std::endl
        << "- : ��������� ������� �� 1" << std::endl
        << "= : �������� ������� �������� ��������" << std::endl
        << "x : ��������� ������ ��������� " << std::endl;

    std::cout << std::endl;

    std::string sum = "+";
    std::string diff = "-";
    std::string equally = "=";
    std::string completion = "x";
    std::string command;

    do {
        std::cout << std::endl;
        std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";

        std::cin >> command;

        if (command == sum) {
            cont.add();
        }
        else if (command == diff) {
            cont.dif();
        }
        else if (command == equally) {
            cont.equally();
        }

    } while (command != completion);
}
