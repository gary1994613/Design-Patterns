#include "ExamPaper.h"
#include <iostream>

void ExamPaper::questionFirst()
{
	std::cout << "What characteristic is relatively constant in mitochondrial genomes across species?\na.Content b.Organization c.Size" << std::endl;
	std::cout << answerFirst() << std::endl;
}

void ExamPaper::questionSecond()
{
	std::cout << "All of the following are true about mitochondria except\na.They contain DNA. b.They make some of their own proteins. c.They are static." << std::endl;
	std::cout << answerSecond() << std::endl;
}

void ExamPaper::questionThird()
{
	std::cout << "In addition to the nucleus, which organelles contain DNA?\na.Golgi bodies b.Mitochondria and chloroplasts c.Ribosomes" << std::endl;
	std::cout << answerThird() << std::endl;
}

std::string ExamPaper::answerFirst()
{
	return "";
}

std::string ExamPaper::answerSecond()
{
	return "";
}

std::string ExamPaper::answerThird()
{
	return "";
}