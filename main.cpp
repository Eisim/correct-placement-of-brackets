#include<iostream>
#include<stack>
#include<string>
bool isCorrect(const std::string& str) {
	std::stack<char> st;
	for (unsigned int i = 0; i < str.size(); i++) {
		if (str[i] == '(') st.push(')');
		if (str[i] == '{') st.push('}');
		if (str[i] == '[') st.push(']');
		
		//std::cout << str[i]<<" "<<st.top()<<std::endl;
		if (!st.empty() && str[i]==st.top()) {
			st.pop();
		}
		else if (str[i]==')' || str[i]=='}' || str[i]==']')return false;
		
	}
	


	return st.empty();
}

int main(int argc, char* argv[]) {
	std::string str;
	std::cout << "Wrote \"end\" for end\n";
	do {
		std::cin >> str;
		isCorrect(str) ? std::cout << "Corrent\n" : std::cout << "False\n";
	} while (str != "end");
	return 0;
}