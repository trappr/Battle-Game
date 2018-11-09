#ifndef DIE_HPP
#define DIE_HPP


class Die
{
    public:
        Die();
        ~Die();
        int d6();
        int d10();
        int d12();

    protected:

    private:
        int result;
};

#endif // DIE_HPP
