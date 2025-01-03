#pragma once
#include "Book.h"
#include <unordered_map>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

class BorrowManager {
private:
    unordered_map<string, int> stock; // 책 제목, 수량 관리

public:
    // 초기 재고 설정
    void initializeStock(const Book& book, int quantity = 3) {
        stock[book.title] = quantity;
    }

    // 책 대여
    void borrowBook(const string& title) {
        if (stock.find(title) != stock.end() && stock[title] > 0) {
            stock[title]--;
            cout << "대여 완료: " << title << endl;
        }
        else {
            cout << "재고 없음: " << title << endl;
        }
    }

    // 책 반납
    void returnBook(const string& title) {
        if (stock.find(title) != stock.end()) {
            stock[title]++;
            cout << "반납 완료: " << title << endl;
        }
        else {
            cout << "재고에 없는 책: " << title << endl;
        }
    }

    // 재고 상태 출력
    void displayStock() const {
        cout << "현재 재고:\n";
        for (const auto& pair : stock) {
            cout << "제목: " << pair.first << ", 수량: " << pair.second << endl;
        }
    }
};
