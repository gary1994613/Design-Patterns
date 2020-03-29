#include <iostream>
#include <memory>
#include "Context.h"
#include "VariableExp.h"
#include "OperationExp.h"
#include "Constant.h"


int main()
{
    std::cout << "Test Interpreter !\n";

    Context c;

    std::unique_ptr<VariableExp> x = std::make_unique<VariableExp>("X");
    std::unique_ptr<VariableExp> y = std::make_unique<VariableExp>("Y");

    c.assign(x->getName(), false);
    c.assign(y->getName(), true);

    std::unique_ptr<IBooleanExp> Notx = std::make_unique<NotExp>(x.get());
    std::unique_ptr<IBooleanExp> yAndNotx = std::make_unique<AndExp>(y.get(), Notx.get());
    std::unique_ptr<IBooleanExp> trueExp = std::make_unique<Constant>(true);
    std::unique_ptr<IBooleanExp> trueAndx = std::make_unique<AndExp>(trueExp.get(), x.get());
    std::unique_ptr<IBooleanExp> booleanExp = std::make_unique<OrExp>(trueAndx.get(), yAndNotx.get());

    std::cout << "\n(true and x) or (y and (not x)) : " << booleanExp->interpret(c) << std::endl;
    std::cout << std::endl;
}
