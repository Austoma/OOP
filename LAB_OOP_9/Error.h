#ifndef TASKNINE_ERROR_H
#define TASKNINE_ERROR_H

#include <iostream>
#include <string>

class Error {
public:
    virtual void what() {};
};

class IndexError : public Error {
protected:
    std::string msg;
public:
    IndexError() {
        msg = "Index Error\n";
    }
    virtual void what() override {
        std::cout << msg;
    }
};

class SizeError : public Error {
protected:
    std::string msg;
public:
    SizeError() {
        msg = "Size Error\n";
    }
    void what() override {
        std::cout << msg;
    }
};

class EmptySizeError : public SizeError {
protected:
    std::string msg_;
public:
    EmptySizeError() {
        msg_ = "List is empty\n";
    }
    void what() override {
        SizeError::what(); // Вызов метода базового класса
        std::cout << msg_;
    }
};

class IndexError1 : public IndexError {
protected:
    std::string msg_;
public:
    IndexError1() {
        msg_ = "Index < 0\n";
    }
    void what() override {
        IndexError::what(); // Вызов метода базового класса
        std::cout << msg_;
    }
};

class IndexError2 : public IndexError {
protected:
    std::string msg_;
public:
    IndexError2() {
        msg_ = "Index > size\n";
    }
    void what() override {
        IndexError::what(); // Вызов метода базового класса
        std::cout << msg_;
    }
};

#endif
