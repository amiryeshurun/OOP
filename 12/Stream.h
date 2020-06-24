#ifndef __STREAM_H_
#define __STREAM_H_

#include <list>

using namespace std;

template <class T>
class Stream{
public:
    list<T> innerList;
    Stream() {}
    Stream(const list<T>& lst) {
        innerList = lst;
    }

    template<class K, class Function>
    Stream<K> map(Function mapper) { // mapper: T -> K
        Stream<K> newStream;
        typename list<T>::iterator it = innerList.begin();
        for(; it != innerList.end(); it++){
            K newValue = mapper(*it);
            newStream.innerList.push_back(newValue);
        }
        return newStream;
    }

    template <class Function>
    void forEach(Function func) {
        typename list<T>::iterator it = innerList.begin();
        for(; it != innerList.end(); it++) 
            func(*it);
    }

    template <class Function>
    Stream<T> removeIf(Function predicate) {
        Stream<T> newStream(innerList);
        typename list<T>::iterator it = newStream.innerList.begin();
        for(; it != newStream.innerList.end(); it++){
            if(predicate(*it)) {
                it = newStream.innerList.erase(it);
                it--;
            } 
        }
        return newStream;
    }
};

#endif