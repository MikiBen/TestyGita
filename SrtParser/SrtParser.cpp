﻿#include <iostream>
#include "SrtParser.h"

int main()
{
	SrtParser B;
	string fileName = "TestInput.srt";
	B.readSubtitlesFromFile(fileName);
	//B.showSubtitles();
}

