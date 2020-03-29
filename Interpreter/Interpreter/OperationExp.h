#pragma once
#include "IBooleanExp.h"


class AndExp : public IBooleanExp
{
public:
	AndExp(IBooleanExp* operand1, IBooleanExp* operand2);
	~AndExp();
	bool interpret(Context& context) override;

private:
	IBooleanExp* m_operand1;
	IBooleanExp* m_operand2;
};


class OrExp : public IBooleanExp
{
public:
	OrExp(IBooleanExp* operand1, IBooleanExp* operand2);
	~OrExp();
	bool interpret(Context& context) override;

private:
	IBooleanExp* m_operand1;
	IBooleanExp* m_operand2;
};


class NotExp : public IBooleanExp
{
public:
	NotExp(IBooleanExp* operand);
	~NotExp();
	bool interpret(Context& context) override;

private:
	IBooleanExp* m_operand;
};

