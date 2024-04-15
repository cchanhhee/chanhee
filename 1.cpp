#include <iostream>

class Rectangle {
private:
    int width; // �簢���� �ʺ� 
    int height; // �簢���� ����

public:
    Rectangle(int width, int height) : width(width), height(height) {}

    int get_width() const {
        return width; // �ʺ� ��������
    }

    int get_height() const {
        return height; // ���� ��������
    }

    void set_width(int width) {
        if (width <= 0 || width > 1000) return;
        this->width = width; //�ʺ� ����
    }

    void set_height(int height) {
        if (height <= 0 || height > 2000) return;
        this->height = height; // ���� ����
    }

    int area() const {
        return width * height; //�簢���� ���� ���
    }

    int perimeter() const {
        return 2 * (width + height); // �簢���� �ѷ� ���
    }

    bool is_square() const {
        return width == height; // ���簢�������� ���� Ȯ��
    }
};

int main() {
    int userWidth, userHeight;

    // �ʺ� ���� ����� �Է� �ޱ�
    std::cout << "the width of the rectangle: ";
    std::cin >> userWidth;

    // ���̿� ���� ����� �Է� �ޱ�
    std::cout << "the height of the rectangle: ";
    std::cin >> userHeight;

    // ����� �Է����� �簢�� ��ü ����
    Rectangle myRectangle(userWidth, userHeight);

    // �簢�� ���� ǥ��
    std::cout << "Width: " << myRectangle.get_width() << std::endl;
    std::cout << "Height: " << myRectangle.get_height() << std::endl;
    std::cout << "Area: " << myRectangle.area() << std::endl;
    std::cout << "Perimeter: " << myRectangle.perimeter() << std::endl;

    if (myRectangle.is_square()) {
        std::cout << "This rectangle is a square." << std::endl;
    }
    else {
        std::cout << "This rectangle is not a square." << std::endl;
    }

    return 0;
}