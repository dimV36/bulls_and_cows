#ifndef INTVALIDATOR_H
#define INTVALIDATOR_H

#include <QValidator>

class IntValidator : public QValidator
{
    Q_OBJECT
public:
    explicit IntValidator(QObject *parent = 0);
    QValidator::State validate(QString &, int &) const;
private:
    bool IsNumberContainsOnlyOneDigit(QString &) const;
};

#endif // INTVALIDATOR_H
