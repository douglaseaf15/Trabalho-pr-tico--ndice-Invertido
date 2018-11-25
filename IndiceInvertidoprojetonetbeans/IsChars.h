#ifndef ISCHARS_H
#define ISCHARS_H


class IsChars
{
public:
    IsChars(const char* charsToRemove);

    bool operator()(char c);

private:
    const char* chars;
};

#endif // ISCHARS_H
