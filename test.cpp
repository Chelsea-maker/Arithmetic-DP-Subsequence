#include"Problem1.h"
#include"Problem2.h"

int main()
{
	//test Problem1
    string s1, s2;
    cout << "ÇëÊäÈë×Ö·û´®1: ";
    cin >> s1;
    cout << "ÇëÊäÈë×Ö·û´®2: ";
    cin >> s2;
    int result = countSubsequences(s1, s2);
    cout << "×Ö·û´®1ÖÐ×ÓÐòÁÐµÈÓÚ×Ö·û´®2µÄÊýÁ¿Îª£º " << result << endl;
	return 0;
}