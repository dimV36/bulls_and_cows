#include "intvalidator.h"

IntValidator::IntValidator(QObject *parent) :
    QValidator(parent) {
}


QValidator::State IntValidator::validate(QString &number, int &) const {
    if ((true == IsNumberContainsOnlyOneDigit(number)) && (true == number.contains(QRegExp("^[0-9]*$"))))
        return QValidator::Acceptable;
    else
        return QValidator::Invalid;
}


bool IntValidator::IsNumberContainsOnlyOneDigit(QString &number) const {
    for (int i = 0; i < number.size(); i++) {
        if (number.count(number.at(i)) > 1)
            return false;
    }
    return true;
}
