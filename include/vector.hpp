# include <iostream>
class Vector{
    public:
    Vector();
    Vector(size_t initial_capacity);
    Vector(const Vector& other);
    ~Vector();

    void push_back(int value);
    void push_front(int value);
    void pop_back();
    void pop_front();

    void insert(size_t indx, int value);
    void remove(size_t indx);

    bool empty() const;
    void clear();

    const int& operator[](size_t indx) const;
    int& operator[](size_t indx);

    private:
    int* data_;
    size_t length_;
    size_t capacity_;
    void resize(size_t new_capacity);
};