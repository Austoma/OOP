#ifndef ITERATOR_H
#define ITERATOR_H


class Iterator
{
    public:
        Iterator();
        virtual ~Iterator();

        double GetRe() { return Re; }
        double GetIm() { return Im; }

    protected:

    private:
        double Re;
        double Im;
};

#endif // ITERATOR_H
