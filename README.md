## BorrowManager.h의 함수 설명

initializeStock(const Book& book, int quantity = 3)
책의 제목을 기준으로 초기 재고를 설정합니다.
unordered_map에 책 제목과 초기 재고 수량을 저장합니다.

borrowBook(const string& title)
책을 대여하며 재고를 1 감소시킵니다.
재고가 없거나 책이 존재하지 않을 경우 적절한 메시지를 출력합니다.

returnBook(const string& title)
책을 반납하며 재고를 1 증가시킵니다.
unordered_map에 책 제목이 없으면 "재고에 없는 책" 메시지를 출력합니다.

displayStock() const
현재 재고 목록을 출력합니다.
모든 책 제목과 수량을 unordered_map에서 가져와 출력합니다.

## BookManager.h의 함수 설명

addBook(const string& title, const string& author)
책 제목과 작가를 받아 books 벡터에 새로운 책 객체를 추가합니다.

findBookByTitle(const string& title)
주어진 제목과 일치하는 책을 books 벡터에서 검색합니다.
책이 존재하면 해당 책 객체의 포인터를 반환하고, 없으면 nullptr을 반환합니다.

findBookByAuthor(const string& author)
주어진 작가와 일치하는 책을 books 벡터에서 검색합니다.
책이 존재하면 해당 책 객체의 포인터를 반환하고, 없으면 nullptr을 반환합니다.

displayAllBooks() const
현재 books 벡터에 저장된 모든 책의 제목과 작가 정보를 출력합니다.
