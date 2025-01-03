#pragma once
#include <string>
#include <iostream>


using namespace std;

class Book {
public:
    string title;
    string author;
    bool isBorrowed;

public:
    // 생성자
    Book(const string& title, const string& author)
        : title(title), author(author) {}

    // 책 정보 출력
    void display() const {
        std::cout << "Title: " << title << ", Author: " << author << std::endl;
    }
};
