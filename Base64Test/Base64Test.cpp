#include <iostream>
#include "../WinUtil/Encoding.hpp"

using namespace std;

int main()
{
	auto base64 = WinUtil::Encoding::ToBase64("M�cke");
	auto data = WinUtil::Encoding::FromBase64(base64);

	return 0;
}
