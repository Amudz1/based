#ifndef ISHUFFLE_H
#define ISHUFFLE_H

class IShuffle {
public:
    virtual void shuffle() = 0;
    virtual void shuffle(size_t i, size_t j) = 0;
    virtual ~IShuffle() = default;
};

#endif // ISHUFFLE_H