#ifndef BMPERROR_H
#define BMPERROR_H

#include <string>

class BMPError
{
    std::string msg;
    std::string desc;

public:
    BMPError();
    BMPError(const char *msg, const char *desc = NULL);
    BMPError(const std::string &msg, const std::string &desc = std::string());
    void setText(const char *msg);
    void setText(const std::string &msg);
    void setDescription(const char *desc);
    void setDescription(const std::string &desc);
    std::string text();
    std::string description();
};

#endif // BMPERROR_H
