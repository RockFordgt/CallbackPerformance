#ifndef _FUNC_HPP_
#define _FUNC_HPP_

#include <qt5/QtCore/QObject>

void func();

struct base {
    virtual void virtual_func() = 0;
};

struct derived : public base {
    void virtual_func() override;
};

class Caller: public QObject {
    Q_OBJECT
    public:
        Caller(){}
        void run();
        std::chrono::time_point<std::chrono::high_resolution_clock> begin;
        std::chrono::high_resolution_clock::duration total;
        const size_t count = 100000000;
        size_t i = 0;

    signals:
        void call();
};

class Receiver: public QObject {
    Q_OBJECT
    public:
        Receiver() = default;
    public slots:
        void func();
    public:
        unsigned int counter=0;
};


#endif // _FUNC_HPP_
