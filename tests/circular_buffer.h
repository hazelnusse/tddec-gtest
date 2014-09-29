#ifndef CIRCULAR_BUFFER_H
#define CIRCULAR_BUFFER_H

#include <array>

template <class T, std::size_t N>
class circular_buffer {
public:
    void push_back(const T& elem) {
        m_ar[0] = 1;
    }

    T operator[](std::size_t i) const {
        return m_ar[0];
    }

    bool empty() const {
        return true;
    }

    std::size_t size() const {
        return 0;
    }

    std::size_t max_size() const {
        return N;
    }

private:
    std::array<T, N> m_ar;
};
#endif

