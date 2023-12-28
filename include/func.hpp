#ifndef _TAUR_FUNC
#define _TAUR_FUNC

namespace std
{
    template <typename Ret, typename ...Params>
    class func
    {
    private:
        Ret (*fn) (Params...);
    public:
        func(Ret (*fn2) (Params...))
        {
            this->fn = fn2;
        }
        Ret run(Params... args)
        {
            return this->fn(args...);
        }
    };
}
#endif