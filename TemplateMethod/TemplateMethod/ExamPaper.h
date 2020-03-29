#pragma once
#include <string>

class ExamPaper
{
public:
	virtual	~ExamPaper() {};
	void questionFirst();
	void questionSecond();
	void questionThird();

protected:
	virtual std::string answerFirst();
	virtual std::string answerSecond();
	virtual std::string answerThird();
};