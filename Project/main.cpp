#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	string answer = "";
	bool isEven = s.length() % 2 == 0;
	int idx = s.length() / 2;
	if (isEven)
		answer += s[idx - 1];
	answer += s[idx];
	return answer;
}

void main()
{
	//test
	//auto ret = solution("abcde");
}