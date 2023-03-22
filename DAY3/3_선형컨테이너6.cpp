#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
#include <string>
#include <fstream>
#include "show.h"


class FindChar
{
	std::string data;
public:
	FindChar(const std::string& s) : data(s) {}

	inline bool operator()(char c) const
	{
		// 문자열에서 문자 찾기는 s.find() 하면 됩니다.
		return data.find(c) != std::string::npos;
	}
};

int main()
{
	std::vector<std::string> v;
	std::ifstream f("3_선형컨테이너6.cpp"); // 현재 파일이름

	std::string s;

// 	f >> s;				// 파일에서 한 단어 읽기
//	std::getline(f, s); // 파일에서 한줄 읽기

	while (std::getline(f, s))
		v.push_back(s);
	//----------------------------

//	std::reverse(v.begin(), v.end()); // 파일 상/하 로 뒤집기

	// 파일 좌/우로 뒤집기
//	std::reverse(v[0].begin(), v[0].end());

	for (auto& e : v)
	{
		// 파일 전체를 좌우로 뒤집기
		// std::reverse(e.begin(), e.end());

		// i 를 공백으로 치환
		// std::replace(e.begin(), e.end(), 'i', ' ');

		// 모든 모음을 공백으로 치환해 보세요.
//		std::replace_if(e.begin(), e.end(), [](char c) {}, ' ');

		FindChar fc("aeiouAEIOU");
		std::replace_if(e.begin(), e.end(), fc, ' ');
	}


	//-------------------------------------
	for (auto& n : v)
		std::cout << n << std::endl;
}


