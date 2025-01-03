#pragma once
#include "Book.h"
#include <unordered_map>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

class BookManager {
private:
    vector<Book> books; // 책 목록 관리

public:
    // 책 추가
    void addBook(const string& title, const string& author) {
        books.emplace_back(title, author);
    }

    // 제목으로 책 찾기
    Book* findBookByTitle(const string& title) {
        for (auto& book : books) {
            if (book.title == title) {
                return &book;
            }
        }
        return nullptr;
    }

    // 작가로 책 찾기
    Book* findBookByAuthor(const string& author) {
        for (auto& book : books) {
            if (book.author == author) {
                return &book;
            }
        }
        return nullptr;
    }

    // 모든 책 출력
    void displayAllBooks() const {
        cout << "책 목록:\n";
        for (const auto& book : books) {
            cout << "제목: " << book.title << ", 작가: " << book.author << endl;
        }
    }
};

