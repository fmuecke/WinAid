#include <iostream>
#include "../WinApiHelper/Encoding.hpp"

using namespace std;

int main()
{
	auto base64 = WinApiHelper::Encoding::ToBase64("M�cke");
	auto data = WinApiHelper::Encoding::FromBase64(base64);

	return 0;
}
