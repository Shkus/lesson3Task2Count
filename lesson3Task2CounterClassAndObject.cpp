#include <fstream>
#include <iostream>
#include <string>

class Counter {

private:
    int startCounter;

public:
    Counter(int startCounter) { this->startCounter = startCounter; };

    void setNum(int startCounter1) { this->startCounter = startCounter1; }

    int add() { return ++startCounter; };

    int dif() { return --startCounter; };

    int equally() { return startCounter; };
};

int main(int argc, char** argv) {

    setlocale(LC_ALL, "rus");

    Counter cont(1);

    std::cout
        << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";

    std::string positive1 = "��";
    std::string positive2 = "��";

    std::string answer;
    std::cin >> answer;

    int startCounter1;

    if (positive1 == answer || positive2 == answer) {

        std::cout << "������� ��������� �������� ��������: ";
        std::cin >> startCounter1;
        cont.setNum(startCounter1);
        std::cout << std::endl;

    }
    else {

        Counter cont(1);
    }


    std::cout << std::endl;

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
            std::cout << cont.equally();
        }

    } while (command != completion);
}

