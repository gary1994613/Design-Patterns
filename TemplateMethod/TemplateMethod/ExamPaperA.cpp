#include "ExamPaperA.h"
#include <iostream>


ExamPaperA::ExamPaperA()
{
	std::cout << "Ctor ExamPaperA" << std::endl;
}

ExamPaperA::~ExamPaperA()
{
	std::cout << "Dtor ExamPaperA" << std::endl;
}

std::string ExamPaperA::answerFirst()
{
	return "a";
}

std::string ExamPaperA::answerSecond()
{
	return "b";
}

std::string ExamPaperA::answerThird()
{
	return "a";
}