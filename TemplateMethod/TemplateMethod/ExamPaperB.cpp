#include "ExamPaperB.h"
#include <iostream>


ExamPaperB::ExamPaperB()
{
	std::cout << "Ctor ExamPaperB" << std::endl;
}

ExamPaperB::~ExamPaperB()
{
	std::cout << "Dtor ExamPaperB" << std::endl;
}

std::string ExamPaperB::answerFirst()
{
	return "c";
}

std::string ExamPaperB::answerSecond()
{
	return "b";
}

std::string ExamPaperB::answerThird()
{
	return "b";
}