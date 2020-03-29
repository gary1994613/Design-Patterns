#pragma once
#include "ExamPaper.h"

class ExamPaperA : public ExamPaper
{
public:
	ExamPaperA();
	~ExamPaperA();

protected:
	std::string answerFirst() override;
	std::string answerSecond() override;
	std::string answerThird() override;
};