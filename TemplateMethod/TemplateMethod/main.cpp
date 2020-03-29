#include <iostream>
#include "ExamPaperA.h"
#include "ExamPaperB.h"


int main()
{
	std::cout << "Test Template Method !\n";

	std::cout << "\nStudent A Exam Paper" << std::endl;
	std::unique_ptr<ExamPaper> examPaperStudentA = std::make_unique<ExamPaperA>();
	examPaperStudentA->questionFirst();
	examPaperStudentA->questionSecond();
	examPaperStudentA->questionThird();

	std::cout << "\nStudent B Exam Paper" << std::endl;
	std::unique_ptr<ExamPaper> examPaperStudentB = std::make_unique<ExamPaperB>();
	examPaperStudentB->questionFirst();
	examPaperStudentB->questionSecond();
	examPaperStudentB->questionThird();

	std::cout << std::endl;
}
