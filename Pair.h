#ifndef __PAIR_H__
#define __PAIR_H__


template <class T1, class T2>
class Pair
{
    private:
        T1 first;
        T2 second;
    public:
        Pair(T1 first, T2 second);
};

template <class T1, class T2>
Pair<T1,T2>::Pair(T1 first, T2 second)
{
    this->first = first;
    this->second = second;
}

#endif __PAIR_H__