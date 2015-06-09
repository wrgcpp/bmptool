#include "bmperror.h"

BMPError::BMPError()
{
}

BMPError::BMPError(const char *msg, const char *desc)
{
    this->msg = std::string(msg);
    if(desc) {
        this->desc = std::string(desc);
    }
}

BMPError::BMPError(const std::string &msg, const std::string &desc)
{
    this->msg = msg;
    this->desc = desc;
}

void BMPError::setText(const char *msg)
{
    this->msg = std::string(msg);
}

void BMPError::setText(const std::string &desc)
{
    this->msg = msg;
}

void BMPError::setDescription(const char *desc)
{
    this->desc = std::string(desc);
}

void BMPError::setDescription(const std::string &desc)
{
    this->desc = desc;
}

std::string BMPError::text()
{
    return this->msg;
}

std::string BMPError::description()
{
    return this->desc;
}
