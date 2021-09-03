#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{

}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("ShrubberyCreationForm", 145, 137), _Target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
{
    *this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& srcObj)
{
    if (this != &srcObj)
    {
        this->setSigne(srcObj.isSigned());
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << this->getName() << " Deconstructor\n";
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getExecGrade())
        throw Form::GradeTooLowException();
    if (!this->isSigned())
        throw Form::AlredySignedException();
    std::ofstream output;
    output.open(this->_Target + "_shrubbery");
    output << "                  * * \n";
    output << "           *    *  *  \n";
    output << "      *  *    *     *  * \n";
    output << "     *     *    *  *    * \n";
    output << " * *   *    *    *    *   * \n";
    output << " *     *  *    * * .#  *   * \n";
    output << " *   *     * #.  .# *   * \n";
    output << "  *     \"#.  #: #\" * *    * \n";
    output << " *   * * \"#. ##\"       * \n";
    output << "   *       \"### \n";
    output << "             \"## \n";
    output << "              ##. \n";
    output << "              .##: \n";
    output << "              :### \n";
    output << "              ;### \n";
    output << "            ,####. \n";
    output << "/\\/\\/\\/\\/\\/.######.\\/\\/\\/\\/\\ \n";
}
