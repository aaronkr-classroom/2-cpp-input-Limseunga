// frame2.cpp
#include <iostream>
#include <string>

int main() {
	std::cout << "What's your name? >>> ";
	std::string name;
	std::cin >> name;

	using std::cin;     using std::cout;
	using std::string;  using std::endl;

	// 인사 문자열 만들기
	const std::string greeting = "Hello. " + name + "!"; //const : 상수 변경 불가

	// 인사말 옆/앞/뒤/아래 있는 공백 개수
	const int pad = 1;

	// 열과 행의 개수
	const int rows = pad * 2 + 3; // 행
	const string::size_type cols = greeting.size() + pad * 2 + 2;// 열

	// 여기부터 출력
	cout << endl;

	// rows개 행을 출력
	// 불변성: 지금까지 r개 행을 출력
	for (int r = 0; r != rows; ++r) {
		string::size_type c = 0;

		while(c != cols) { // 불변성: 현재 행에서 c개 문자를 출력
			if (r == pad + 1 && c == pad + 1) { // 인사말 출력 여부를 판별
				cout << greeting;
				c += greeting.size();
			}
			else {
				// 테두리 출력 여부를 판별
				if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
					cout << "@";
				}
				else {
					cout << " ";
				} // if-else 끝
				++c;
			} // if-else 끝
		} // while 끝
		cout << endl;

	} // for 끝

	return 0;
}