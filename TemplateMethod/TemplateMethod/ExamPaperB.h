#pragma once
#include "ExamPaper.h"

class ExamPaperB : public ExamPaper
{
public:
	ExamPaperB();
	~ExamPaperB();

protected:
	std::string answerFirst() override;
	std::string answerSecond() override;
	std::string answerThird() override;
};