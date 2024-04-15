#include <iostream>

class Rectangle {
private:
    int width; // 사각형의 너비 
    int height; // 사각형의 높이

public:
    Rectangle(int width, int height) : width(width), height(height) {}

    int get_width() const {
        return width; // 너비 가져오기
    }

    int get_height() const {
        return height; // 높이 가져오기
    }

    void set_width(int width) {
        if (width <= 0 || width > 1000) return;
        this->width = width; //너비 설정
    }

    void set_height(int height) {
        if (height <= 0 || height > 2000) return;
        this->height = height; // 높이 설정
    }

    int area() const {
        return width * height; //사각형의 넓이 계산
    }

    int perimeter() const {
        return 2 * (width + height); // 사각형의 둘레 계산
    }

    bool is_square() const {
        return width == height; // 정사각형인지의 여부 확인
    }
};

int main() {
    int userWidth, userHeight;

    // 너비에 대한 사용자 입력 받기
    std::cout << "the width of the rectangle: ";
    std::cin >> userWidth;

    // 높이에 대한 사용자 입력 받기
    std::cout << "the height of the rectangle: ";
    std::cin >> userHeight;

    // 사용자 입력으로 사각형 객체 생성
    Rectangle myRectangle(userWidth, userHeight);

    // 사각형 정보 표시
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